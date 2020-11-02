#include <unistd.h>
#include <stdio.h>
#include <inttypes.h>

/**********************
 * 
 * 0 - standard input
 * 1 - standard output
 * 2 - standard error
 * 
 **********************/

#ifndef STDIN
#define STDIN  0
#endif
#ifndef STDOUT
#define STDOUT 1
#endif
#ifndef STDERR
#define STDERR 2
#endif

int main(int argc, char** argv)
{
    ssize_t res = 0;

    const char* out = "here is some data\n";
    res = write(STDOUT, out, 18);

    printf("res : %ld\n", res);

    const int8_t fucking[] = { 74, 75, 76, '\n', '\0' };
    res = write(STDOUT, fucking, 4);

    printf("res : %ld\n", res);

    const char* err_msg = "error!\n";
    res = write(STDERR, err_msg, 7);
    printf("res : %ld\n", res);

    return 0;
}
