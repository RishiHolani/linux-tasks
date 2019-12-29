#include <linux/module.h>    
#include <linux/kernel.h>    
#include <linux/init.h>      

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Rishi Holani");

int bin=0;
module_param(bin, int, S_IRUSR | S_IWUSR);

void main()
{
if(bin = 1)
{   
	module_init(hny_init);	
	module_exit(hny_cleanup);
}
}

int __init hny_init(void)
{
	printk(KERN_INFO "Hello \n");
	return 0;   
}

void __exit hny_cleanup(void)
{
    printk(KERN_INFO "Bye\n");
}

