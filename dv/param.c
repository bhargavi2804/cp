#include<linux/init.h>
#include<linux/module.h>

#include<linux/moduleparam.h>

//create variable
int param_var[3]={0,0,0};

//register var
//name,type,permissions
module_param_array(param_var,int,NULL,S_IRUSR|S_IWUSR);

display(void)
{
	printk(KERN_INFO "parameter value=%d",param_var[0]);
	printk(KERN_INFO "parameter value=%d",param_var[1]);
	printk(KERN_INFO "parameter value=%d",param_var[2]);

}

static int __init para_start(void) 
{ 
    //printk(KERN_INFO "Loading hello module...\n"); 
    printk(KERN_INFO "Hello worlddd\n"); 
	display();
    return 0; 
} 
  
static void __exit para_end(void) 
{ 
    printk(KERN_INFO "Goodbye Mr.\n"); 
} 
  
module_init(para_start); 
module_exit(para_end); 

