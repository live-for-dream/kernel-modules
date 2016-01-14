#include <linux/init.h>
#include <linux/stat.h>
#include <linux/module.h>
MODULE_LICENSE("Dual BSD/GPL");

static int count = 0;
module_param(count, int, S_IRUGO);

static int hello_init(void)
{
    if (count) {
        printk(KERN_ALERT "repeat times %d\n", count);
    }
    while(--count)
	printk(KERN_ALERT "Hello, world\n");
    return 0;
}
static void hello_exit(void)
{
    printk(KERN_ALERT "Goodbye, cruel world\n");
}
module_init(hello_init);
module_exit(hello_exit);
