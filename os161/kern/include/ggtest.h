#include <types.h>
#include <lib.h>
#include <test.h>

int ggtest(int argc , char **argv)
{

    kprintf("This test is functioning!\n");
    kprintf("Performing advanced calculations:\n");
    kprintf(".........................\n");
    kprintf(".........................\n");
    kprintf(".........................\n");
    kprintf(".........................\n");
    kprintf(".........................\n");
    kprintf(".........................\n");
    kprintf(".........................\n");                        
    kprintf("You entered the string: ");
    //o is always the program name
    for ( int i = 1; i < argc; i++ ) 
    {
        kprintf(" %s\n", argv[i]);
    }
    return 0;
    }
    
