#include <linux/module.h>    
#include <linux/kernel.h>    
#include <linux/init.h>      

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Rishi Holani");

static int __init hny_init(void)
{
    printk(KERN_INFO "Happy New Year!\n");
    return 0;   
} 

static void __exit hny_cleanup(void)
{
    printk(KERN_INFO "-From Rishi.\n");
}

module_init(hny_init);
module_exit(hny_cleanup);