## list1204.c
- アロー演算子テスト

## list1206.c
- 構造体をまるまる返す関数

## list1207.c
- 構造体のメンバーによるソート

## list1208.c
- sqrt関数 平方根を求める、math.h使用、gccコンパイル時エラー `-lm`オプションで解決
- `-lm`について調べる
## prac1204.c
- 選択したメンバーでソート
- `if ( strcmp((char *)&tmp_s[j-1],(char *)&tmp_s[j]))`
 - `(char *)` キャスト変換が必要
 - `if文`が全てtrueになった　＞　０で正しく判定
-