FROM ubuntu:20.04

# パッケージリストの更新, パッケージの更新
RUN apt-get -y update && \
    apt-get -y upgrade

RUN apt-get -y install \
    bash \
    coreutils \
    grep \
    iproute2 \
    iputils-ping \
    traceroute \
    tcpdump \
    bind9-dnsutils \
    dnsmasq-base \
    netcat-openbsd \
    python3 \
    curl \
    wget \
    iptables \
    procps \
    isc-dhcp-client