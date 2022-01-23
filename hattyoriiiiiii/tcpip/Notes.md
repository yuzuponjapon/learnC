- https://mh-mobile.hatenablog.com/entry/2021/12/26/012210

```
$ cd ~/src/learnC/hattyoriiiiiii/tcpip
$ touch Dockerfile
$ docker build -t tcpip:1.0 .
$ docker image ls
$ docker run -it --rm --name tcpip tcpip:1.0 /bin/bash
```

## Chapter02 | TCP/IPとは

- `tcpdump` | コンピューターの中を流れる通信を覗き見できる。パケットキャプチャ/スニッフィング。
  - `sudo tcpdump -tn -i any icmp`
    - `-t` | 時刻に関する情報を出力しない。
    - `-n` | IPアドレスを逆引きせずにそのまま表示。
    - `-i` | 対象のネットワークインターフェースを指定。`any`は全てが対象。
    - `icmp` | パケットキャプチャの対象をICMPに限定。