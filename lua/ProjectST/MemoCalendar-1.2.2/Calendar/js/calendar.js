/* カレンダー表示HTMLを作成 */
// monthOffset: -1なら先月，0なら今月，1なら来月のカレンダーを表示
// styleOpt: cssクラス名指定用の連想配列
//  .calendar: カレンダーのクラス名[='calendar']
//  .title: タイトル(年月)のクラス名[='calendarTitle']
//  .week: 曜日行のクラス名[='calendarWeek']
//  .week_sunday: 曜日行の日曜日のクラス名[='calendarWeekSunday']
//  .week_saturday: 曜日行の土曜日のクラス名[='calendarWeekSaturday']
//  .today: 今日のクラス名[='calendarToday']
//  .sunday: 日曜日列のクラス名[='calendarSunday']
//  .saturday: 土曜日列のクラス名[='calendarSaturday']
function createCalendar(monthOffset, styleOpt){
	// cssスタイル設定
	styleOpt = styleOpt instanceof Object? styleOpt: {}
	var calendarClass = styleOpt.calendar == undefined? "calendar": styleOpt.calendar;
	var titleClass = styleOpt.title == undefined? "calendarTitle": styleOpt.title;
	var weekClass = styleOpt.week == undefined? "calendarWeek": styleOpt.week;
	var weekSundayClass = styleOpt.week_sunday == undefined? "calendarWeekSunday": styleOpt.week_sunday;
	var weekSaturdayClass = styleOpt.week_saturday == undefined? "calendarWeekSaturday": styleOpt.week_saturday;
	var todayClass = styleOpt.today == undefined? "calendarToday": styleOpt.today;
	var sundayClass = styleOpt.sunday == undefined? "calendarSunday": styleOpt.sunday;
	var saturdayClass = styleOpt.saturday == undefined? "calendarSaturday": styleOpt.saturday;
	
	// 準備
	var innerHTML = "";	// 戻り値HTML
	var calTblLine, calTbl;	// カレンダーの表のセル
	var date = new Date();	// 今日の日付データ取得
	var weekTbl = new Array( "日","月","火","水","木","金","土" );	// 曜日テーブル定義
	var monthTbl= new Array( 31,28,31,30,31,30,31,31,30,31,30,31 );	// 月テーブル定義
	var today = date.getDate();	// 今日の '日'
	var month = date.getMonth();	// 今日の '月' (0～11)
	var year, week;
	
	date.setDate(1);				// 日付を '1日' に変えて、
	month = month + monthOffset;	// '月' をパラメータに従って変更
	date.setMonth(month);	// date の '年月' を変更
	year = date.getFullYear();	// 西暦取得
	month = date.getMonth();	// 月を取得(0～11)
	week = date.getDay();	// '1日'の曜日を取得
	if ((year%4 == 0 && year%100 != 0) || (year%400) == 0){	// うるう年なら
		monthTbl[1] = 29;	// 2月を29日とする
	}
	
	calTblLine = Math.ceil((week + monthTbl[month]) / 7);	// 0と31日を足すとカレンダーテーブルの総マス数．これを7で割って切り上げると行数
	calTbl = new Array(7 * calTblLine);	// カレンダー表の全ての配列を作る
	for(var i = 0; i < 7*calTblLine; i++) calTbl[i] = "";	// 表の初期化
	for(var i = 0; i < monthTbl[month]; i++) calTbl[week+i] = i+1;	// 日にちを入れる
	
	/*** カレンダーの表示 ***/
	innerHTML += "<table class='" + calendarClass + "'>";	// 表の作成開始
	innerHTML += "<tr class='" + titleClass + "'><td colspan='7'>";	// 見出し
	innerHTML += year + "年" + (month + 1) + "月";
	innerHTML += "</td></tr>";
	
	innerHTML += "<tr class='" + weekClass + "'>";	// 曜日見出しセット
	for(var i = 0; i < 7; i++){	// 一行(1週間)ループ
		if(i == 0){
			innerHTML += "<td class='" + weekSundayClass + "'>";	// 日曜のセル
		}else if(i == 6){
			innerHTML += "<td class='" + weekSaturdayClass + "'>";	// 土曜のセル
		}else{
			innerHTML += "<td>";	// 月～金のセル
		}
		innerHTML += weekTbl[i];	// '日'から'土'の表示
		innerHTML += "</td>";
	}
	innerHTML += "</tr>";
	
	for(var i = 0; i < calTblLine; i++){	// 表の「行」のループ
		innerHTML += "<tr>";	// 行の開始
		for(var j = 0; j < 7; j++){	// 表の「列」のループ
			var day = calTbl[ j + (i*7) ];	// 書きこむ内容の取得
			var id = year + "_" + (month+1) + "_" + day;	// セルID
			
			if(day == today && monthOffset == 0){
				innerHTML += "<td class='" + todayClass + "' ";	// 今日のセル
			}else if( j == 0 ){
				innerHTML += "<td class='" + sundayClass + "' ";	// 日曜のセル
			}else if( j == 6 ){
				innerHTML += "<td class='" + saturdayClass + "' ";	// 土曜のセル
			}else{
				innerHTML += "<td ";	// 平日のセル
			}
			// セルのIDは"year_month_day", クリック時の動作はonCalendarClick(ID)で指定可能
			if(day != "") innerHTML += "id = '" + id + "' onclick='onCalendarClick(\"" + id + "\")'>";
			else innerHTML += ">";
			innerHTML += day;	// 日付セット
			innerHTML += "</td>";	// 列(セル)の終わり
		}
		innerHTML += "</tr>";	// 行の終わり
	}
	innerHTML += "</table>";	// 表の終わり
	return {
		"year": year, "month": month+1, "html": innerHTML
	}
}
