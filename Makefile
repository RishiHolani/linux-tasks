obj-m += hny.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(shell PWD) modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(shell PWD) clean
