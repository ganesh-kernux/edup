#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>

static int __init Hello(void)
{
 	printk(KERN_INFO "Hello World..!\n");
	return 0;
}

static void __exit Bye(void)
{
	printk(KERN_INFO "Good Bye! World \n");
}

module_init(Hello);
module_exit(Bye);
