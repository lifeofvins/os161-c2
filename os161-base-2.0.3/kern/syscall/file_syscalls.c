#include <../dev/generic/console.h>
#include <file_syscalls.h>
#include <types.h>
#include <lib.h>

int
sys_read(char *str, int str_size)
{
    size_t w_size = 0;
    int i;

    for(i = 0; i < str_size; i++)
    {
        str[i] = getch();
        w_size++;
    }

    return (int) w_size;
}

int
sys_write(char *str, int str_size)
{
    size_t w_size = 0;
    int i;

    for(i = 0; str[i] != '\0' && i < str_size; i++)
    {
        putch(str[i]);
        w_size++;
    }

    return (int) w_size;
}