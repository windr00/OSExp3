#include <linux/init.h>
#include <linux/module.h>
#include <linux/sched.h>


static int list_init(void) {
    struct task_struct *init_task;
    int count;
    count = 0;
    init_task = NULL;
    init_task = &init_task;
    printk("list processes using for_each_process");
    printk(KERN_ALERT"PID\tCOMM\n");
    for_each_process(init_task) {

        count++;

        printk(KERN_ALERT "%d\t%s\n", init_task->pid, init_task->comm);

    }

    printk("current process count : %d\n", count);
    printk(KERN_ALERT "this module is done by 冉惟之 stu. id : 2013060105023\n");

    return 0;

}

static void list_exit(void) {

    printk(KERN_ALERT "process list finished, now quiting\n");
}

module_init( list_init );

module_exit( list_exit );

MODULE_AUTHOR( "windr00" );

MODULE_LICENSE( "GPL" );