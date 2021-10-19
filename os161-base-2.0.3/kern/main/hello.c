#include <types.h>
#include <kern/errno.h>
#include <kern/reboot.h>
#include <kern/unistd.h>
#include <lib.h>
#include <spl.h>
#include <clock.h>
#include <thread.h>
#include <proc.h>
#include <current.h>
#include <synch.h>
#include <vm.h>
#include <mainbus.h>
#include <vfs.h>
#include <device.h>
#include <syscall.h>
#include <test.h>
#include <version.h>
#include <hello.h>
#include "autoconf.h"  // for pseudoconfig

typedef struct data_s{
    int id;
    char data[9];
} data_t, *pdata_t;

void hello(void){
    data_t data;
    pdata_t pdata = &data;
    pdata->id = 4;
    strcpy(pdata->data, "abcd1234");
    kprintf("/************************\nhello vivi, it's working with pointers!\n%d: %s\n************************/\n", pdata->id, pdata->data);
    return;
}