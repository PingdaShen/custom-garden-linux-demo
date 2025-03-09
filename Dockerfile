FROM debian:stable-slim

# install linux kernel build and complie tools
RUN apt-get update && apt-get install -y \
    build-essential \
    linux-headers-$(uname -r) \
    make \
    gcc \
    && rm -rf /var/lib/apt/lists/*

# copy kernel module code
COPY kernel_module /usr/src/kernel_module

WORKDIR /usr/src/kernel_module

RUN make

CMD [ "ls", "-l", "hello.ko"]