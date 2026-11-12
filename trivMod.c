/*
 * A trivial kernel module that may be loaded, inspected by lsmod and unloaded.
 */

#include <linux/module.h>
#include <linux/kernel.h>

static int __init tmod_init (void)
{
	printk (KERN_INFO "hello kernel\n");

	return 0;
}

static void __exit tmod_exit (void)
{
	printk (KERN_INFO "Bye, bye kernel\n");
}

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Instructor");

module_init(tmod_init);
module_exit(tmod_exit);
