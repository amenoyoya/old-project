/* contentEditableにしたdiv要素に対してショートカットキーを設定する */
// ※要jquery
function setEditorShortcuts(doc){
	function ch(str){ return str.charCodeAt(0); }
	
	$(doc).bind('keydown', function(e){
		if(e.ctrlKey){
			/* list */
			if(e.shiftKey && e.keyCode == ch("L")){
				document.execCommand('insertUnorderedList');
				return false;
			}
			if(e.altKey && e.keyCode == ch("L")){
				document.execCommand('insertOrderedList');
				return false;
			}
			
			/* foreground color */
			if(e.shiftKey && e.keyCode == ch("R")){
				document.execCommand('foreColor', false, "#ff0000");
				return false;
			}
			if(e.shiftKey && e.keyCode == ch("G")){
				document.execCommand('foreColor', false, "#009900");
				return false;
			}
			if(e.shiftKey && e.keyCode == ch("B")){
				document.execCommand('foreColor', false, "#0000ff");
				return false;
			}
			if(e.shiftKey && e.keyCode == ch("K")){
				document.execCommand('foreColor', false, "#000000");
				return false;
			}
			
			/* background color */
			if(e.altKey && e.keyCode == ch("R")){
				document.execCommand('backColor', false, "#ff0000");
				return false;
			}
			if(e.altKey && e.keyCode == ch("G")){
				document.execCommand('backColor', false, "#009900");
				return false;
			}
			if(e.altKey && e.keyCode == ch("B")){
				document.execCommand('backColor', false, "#0000ff");
				return false;
			}
			if(e.altKey && e.keyCode == ch("K")){
				document.execCommand('backColor', false, "#000000");
				return false;
			}
			if(e.altKey && e.keyCode == ch("N")){
				document.execCommand('backColor', false, "#f0e68c");
				return false;
			}
			
			switch(e.keyCode){
			// "B": bold, "I": italic, "U": underLine
			case ch("T"):
				document.execCommand('strikeThrough');
				return false;
			case ch("E"):
				document.execCommand('justifyCenter');
				return false;
			case ch("L"):
				document.execCommand('justifyLeft');
				return false;
			case ch("R"):
				document.execCommand('justifyRight');
				return false;
			case ch("H"):
				document.execCommand('insertHorizontalRule');
				return false;
			case 189: // -キー
				document.execCommand('subScript');
				return false;
			case 187: // +キー
				document.execCommand('superScript');
				return false;
			case 48: // 0キー
				document.execCommand('removeFormat');
				return false;
			}
		}else{
			if(e.keyCode == 112){ // F1キー
				document.execCommand('insertImage', true);
				return false;
			}
			
			if(e.keyCode == 113){ // F2キー
				document.execCommand('createLink', true);
				return false;
			}
			
			/* indent */
			if(e.shiftKey && e.keyCode == 9){ // Shift + TABキー
				document.execCommand('outdent');
				return false;
			}
			if(e.keyCode == 9){ // TABキー
				document.execCommand('indent');
				return false;
			}
		}
		return true;
	});
}

/* エディター選択範囲に対する設定 */
function setEditorSelection(html){
	var sel = document.getSelection();
	var cur = sel.toString(); // 現在の選択範囲の文字列
	var r = sel.getRangeAt(0);
	
	r.deleteContents(); // 選択範囲の文字列を削除
	r.insertNode(r.createContextualFragment(html)); // 選択範囲に文字列セット
}
