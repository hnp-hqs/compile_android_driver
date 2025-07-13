#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

// 模块信息
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Your Name");
MODULE_DESCRIPTION("A simple Hello World Linux Kernel Module");
MODULE_VERSION("0.1");

// 初始化函数 - 模块加载时调用
static int __init hello_init(void)
{
    printk(KERN_INFO "Hello World! Module loaded.\n");
    return 0;
}

// 清理函数 - 模块卸载时调用
static void __exit hello_exit(void)
{
    printk(KERN_INFO "Goodbye World! Module unloaded.\n");
}

// 注册模块函数
module_init(hello_init);
module_exit(hello_exit);
