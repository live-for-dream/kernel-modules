cmd_/home/centos-dev/modules/my_aufs/aufs.ko := ld -r -m elf_x86_64 -T /home/centos-dev/kernel/pure_kernel/linux-2.6.36/scripts/module-common.lds --build-id  -o /home/centos-dev/modules/my_aufs/aufs.ko /home/centos-dev/modules/my_aufs/aufs.o /home/centos-dev/modules/my_aufs/aufs.mod.o