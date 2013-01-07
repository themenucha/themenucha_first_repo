#include<linux.init.h>
#include<linux.module.h>


static int hello_init(void){
printk(KERN_ALERT "hello.I kill you\n");

return 0;
}
static void hello_exit(void){
printk(KERN_ALERT "Good bye. I kill you :) \n");
}
module_init(hello_init);
module_exit(hello_exit);

