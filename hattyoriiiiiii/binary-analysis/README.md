# バイナリ解析
## Chapter04
- 用意したバッファのサイズ以上の入力を受け付けるとバッファオーバーフローが生じる。これが脆弱性の原因になる。
    - scanf関数にはバッファオーバーフローの脆弱性がある。
    - 文字列を読み込む際に、サイズの指定できる`fgets()`関数を利用する。
    - コンパイラは、スタック保護がデフォルトで有効になっている。
#### 参考になったサイト

- [スタック領域について](https://wireless-network.net/stack/)
    - スタックの流れを理解するには、レジスタを理解する
    - 特に重要なレジスタ (64 bit, x64)
        - rsp : スタックポインタ
        - rbp : ベースポインタ
        - rip : プログラムカウンタ
- [アセンブラについて](https://xtech.nikkei.com/it/members/ITPro/ITBASIC/20021218/1/)
    - COMETⅡ