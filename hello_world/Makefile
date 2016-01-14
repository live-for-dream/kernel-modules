#my_aufs_test module for linux kernel 2.6.32
obj-m := hello_world.o
aufs-objs := hello_world.o
PWD = $(shell pwd)
all:
	make -C /lib/modules/`uname -r`/build M=$(PWD) modules
clean:
	rm -rf *.o
	rm -rf *.ko
	rm -rf modules.* Module.* *.mod.* .*
