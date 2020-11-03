#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**********************
 * 
 * O_RDONLY - read only
 * O_WRONLY - write only
 * O_RDWR   - read write
 * 
 * O_APPEND - append buffer to witten data
 * O_TRUNC  - truncate original data
 * O_CREAT  - create a file if needed
 * O_EXCL   - used with 0_CREAT
 *            open() is atomic
 * 
 **********************/

/**********************
 * 
 * PERMISSIONS
 * 
 * S_IRUSR - read,    owner
 * S_IWUSR - write,   owner
 * S_IXUSR - execute, owner
 * S_IRGRP - read,    group
 * S_IWGRP - write,   owner
 * S_IXGRP - execute, owner
 * S_IROTH - read,    others
 * S_IWOTH - write,   others
 * S_IXOTH - execute, others
 * 
 **********************/

int main(int argc, char** argv)
{  
    char c;
    int in, out;

    in = open("file.in", O_RDONLY);
    out = open("file.out", O_WRONLY | O_CREAT, S_IWUSR | S_IRUSR);

    // while ()

    return 0;
}