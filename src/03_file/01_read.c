#include <unistd.h>
#include <memory.h>
#include <stdio.h>

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

// $ echo hello there | ./01_read
// ./01_read < something.txt

int main(int argc, char **argv)
{
    char buffer[128];
    memset(buffer, 0, 128);
    int nread = 0;

    nread = read(STDIN, buffer, 128);

    if (nread == -1)
        write(STDERR, "fuck you\n", 9);

    if (write(STDOUT, buffer, nread) != nread)
        write(STDERR, "deep dark fantasy\n", 18);

    return 0;
}
