# Comment/uncomment the following line to disable/enable debugging
#DEBUG = y


# my_scull module which is changed from LLD3 codes 

obj-m	:= my_scull.o
scull-objs := my_scull.o

KERNELDIR ?= /lib/modules/$(shell uname -r)/build
PWD       := $(shell pwd)

all:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules

clean:
	rm -rf *.o *~ core .depend .*.cmd *.ko *.mod.c .tmp_versions *.symvers *.order


