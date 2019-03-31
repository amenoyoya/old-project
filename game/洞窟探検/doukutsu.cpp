#include <sayo/dxlib.h>

using namespace sayo;

class MainRoutine: public Routine{
	int my;			// 自キャラY位置
	double speed;	// 自キャラスピード
	uint_t sc, hisc, LV;	// スコア
	int uekabe, sukima;
	
	void routine(){
		_CoBegin
		// 最初に画面を真っ黒くしておく
		SetDrawScreen(layer.handle());
		DrawBox(0, 0, 480, 360, GetColor(0, 0, 0), true);
		// 初期化
		speed = 0; uekabe = 200, sukima = 100, my = 180; sc = 0;
		next();
		
		_CoNext
		SetDrawScreen(layer.handle());
		// スコアからレベル算出
		// 500点ごとに難易度上昇
		LV = sc/500 + 1;
		if(LV > 18) LV = 18;
		// 右端に黒線を引く
		DrawLine(479, 0, 479, 359, GetColor(0, 0, 0));
		
		// 上壁の高さを決める
		uekabe += mt_rand(LV*2+1)-LV;
		if(uekabe < 10) uekabe = 10;
		if(uekabe > 250) uekabe = 250;
		// 上壁を引く
		DrawLine(479, 0, 479, uekabe, GetColor(255, LV*40, 0));
		
		// 隙間の高さを決める
		sukima += mt_rand(LV*2+1)-LV;
		if(sukima < 100) sukima = 100;
		if(sukima > 200) sukima = 200;
		// 下壁を引く
		DrawLine(479, uekabe+sukima, 479, 359, GetColor(255, LV*40, 0));
		
		// 自キャラ当たり判定
		if(dxGetPixel(340, my).r != 0) jump(999);	// GAME OVER
		// 自キャラ操作
		DrawPixel(340, my, GetColor(255,255,255));
		if(DxEngine::getKey(DIK_SPACE) > 0) speed -= 0.25;
		else speed += 0.25;
		// スピード制限
		if(speed < -3) speed = -3;
		if(speed > 3) speed = 3;
		my += speed;
		// 画面コピー
		layer.drawRect(0, 0, 1, 0, 479, 360);
		// スコア表示
		++sc;
		DrawBox(80, 5, 270, 21, GetColor(0,0,0), true);
		dxSetFontSize(16);
		dxDrawStr(81, 5, format("LEVEL/%d/Hi/%d/%d", LV, hisc, sc), GetColor(255,255,255));
		next();
		
		_CoNext
		wait(3);	// wait
		next();
		
		_CoNext
		jump(1);	// 洞窟描画に戻る
		_CoEnd
		
		/* GAME OVER画面 */
		if(status() == 1000){
			string str;
			
			if(hisc < sc){
				hisc = sc;
				str = "ハイスコア！ "+tostr(hisc)+"点\n\n";
			}
			str += "もう一度挑戦しますか？";
			Sleep(500);
			if(IDYES == msgbox(str, "GAME OVER", MB_YESNO)){
				jump(0);	// ゲームのスタートに戻る
			}else{
				PostQuitMessage(0);
			}
		}
	}
public:
	DxImage		layer;
	
	MainRoutine(): hisc(0) {
		mt_srand();
		layer.openAsLayer(480, 360);
	}
};

int _WinMain(){
	DxEngine	dx;
	
	dx.setGraph(480, 360);
	dx.open();
	MainRoutine routine;
	while(dx.proc() && dx.getKey(DIK_ESCAPE) == 0){
		routine.layer.draw(0, 0);
		routine.proc();
	}
	return 0;
}
