#ifndef _FILE_SYSCALLS_H_
#define _FILE_SYSCALLS_H

/**
 * sys_read system call.
 *
 * Reads from the standard input buffer (stdin)
 * to the string passed as first parameter which length is
 * specified in the second parameter.
 * 
 * Returns the number of characters read from the
 * standard input.
 */
int sys_read(char *str, int str_size);


/**
 * sys_write system call.
 * 
 * Write the string passed as first parameter into 
 * the stardard output buffer (stdout); the length of the string
 * is specified in the second parameter.
 * 
 * Returns the number of characters written on the
 * standard output.
 */
int sys_write(char *str, int str_size);

#endif