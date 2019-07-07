#include <figit/core.h>
#define _UseSource
#include <figit/irrSDL.h>

using namespace core;
using namespace video;
using namespace scene;
using namespace figit;

float rx = 0, ry = 0; // 回転用

void makeScene(){
	matrix4 mat;
	IVideoDriver *driver = (IVideoDriver*)sdl::Window::getCurrent()->driver();

	//属性設定
	SMaterial Material;
	Material.Lighting = false;			//ライト設定
	Material.BackfaceCulling = false;	//カリング設定
	driver->setMaterial(Material);

	//三角形作成
	u16 triList[] = {0,1,2};
	S3DVertex triVer[3];
	triVer[0] = S3DVertex( 0, 1,0,  0,0,0, 0xFFFF0000, 0,0);//上　：赤
	triVer[1] = S3DVertex( 1,-1,0,  0,0,0, 0xFF00FF00, 0,0);//右下：緑
	triVer[2] = S3DVertex(-1,-1,0,  0,0,0, 0xFF0000FF, 0,0);//左下：青
	mat.setTranslation(vector3df(-2,0,0));//左に2移動
	mat.setRotationRadians(vector3df(rx,0,0));//X軸で回転
	driver->setTransform (ETS_WORLD, mat);//ワールドに反映
	driver->drawIndexedTriangleList(&triVer[0], 3, &triList[0], 1);

	//四角形作成
	u16 rectList[] = {0,1,2, 1,3,2};
	S3DVertex rectVer[4];
	rectVer[0] = S3DVertex(-1, 1,0,  0,0,0, 0xFFFFFF00, 0,0);//左上：黄
	rectVer[1] = S3DVertex( 1, 1,0,  0,0,0, 0xFFFFFF00, 0,0);//右上：黄
	rectVer[2] = S3DVertex(-1,-1,0,  0,0,0, 0xFFFFFF00, 0,0);//左下：黄
	rectVer[3] = S3DVertex( 1,-1,0,  0,0,0, 0xFFFFFF00, 0,0);//右下：黄
	mat.setTranslation(vector3df(2,0,0));//右に2移動
	mat.setRotationRadians(vector3df(0,ry,0));//Y軸で回転
	driver->setTransform (ETS_WORLD, mat);//ワールドに反映
	driver->drawIndexedTriangleList(&rectVer[0], 4, &rectList[0], 2);

	rx += 0.002f;
	ry += 0.001f;
}

__main(){
	sdl::init();
	auto win = sdl::Object::newWindow(sdl::Color(50, 0, 100));
	win->open("direct3d", -1, -1, 800, 600, sdl::Window::DIRECT3D9);
	ulong_t smgr  = sdl::getSceneManager();
	
	//カメラ設定
	sdl::addCamera(smgr);
	while(sdl::pollEvent()){
		printf("%d\r", win->driver()->getFPS());
		/*sdl::getAllKeyStates();
		if(sdl::getKey(sdl::KEY_LALT) > 0 || sdl::getKey(sdl::KEY_RALT) > 0){
			if(sdl::getKey(sdl::KEY_F4) == 1) sdl::pushQuitEvent();
		}*/
		win->beginScene();
		makeScene();
		sdl::drawScene(smgr);
		win->endScene();
		/*if(sdl::getKey(sdl::KEY_Q) == 1){ // Alt+F4エミュレート
			sdl::sendKey(sdl::KEY_LALT, 2);
			sdl::sendKey(sdl::KEY_F4, 1);
		}*/
		sleep(1);
	}
	sdl::quit();
	return 0;
}
