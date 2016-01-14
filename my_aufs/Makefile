#my_aufs_test module for linux kernel 2.6.32
obj-m := aufs.o
aufs-objs := fs_test_main.o
PWD = $(shell pwd)
all:
	make -C /lib/modules/`uname -r`/build M=$(PWD) modules
clean:
	rm -rf *.o
	rm -rf *.ko
	rm -rf *.order *.symvers *.mod.*
