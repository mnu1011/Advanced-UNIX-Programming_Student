#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
//Hello, I am a student.
int main()
{
    char buf[50] = {0};
    //int fd = open("./sample.txt", O_APPEND);
    int fd = open("./sample.txt", O_RDWR);
    lseek(fd, 14, SEEK_SET);
    read(fd, buf, 8);
    printf("%s\n", buf);

    char *buf2 = "NTHU student.";
    lseek(fd, 14, SEEK_SET);
    write(fd, buf2, strlen(buf2));

    lseek(fd, 0, SEEK_SET);
    read(fd, buf, 50);
    printf("%s\n", buf);

    return 0;
}
