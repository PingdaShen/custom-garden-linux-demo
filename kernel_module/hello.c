#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Pingda");
MODULE_DESCRIPTION("A simple kernel module for Garden Linux Demo");
MODULE_VERSION("0.1");

static int __init hello_init(void)
{
    printk(KERN_INFO "Hello Garden Linux! Module loaded.\n");
    return 0;
}

static void __exit hello_exit(void)
{
    printk(KERN_INFO "Goodbye Garden Linux! Module unloaded.\n");
}

module_init(hello_init);
module_exit(hello_exit);