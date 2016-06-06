#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <sys/stat.h>

/* Coded By. roissy */

int main(int argc, char **argv)
{
    char mod[] = "0777";
    char yol[100] = "/home/roissy/test.txt";
    int i;
    i = strtol(mod, 0, 8);
    if (chmod (yol,i) < 0)
    {
        fprintf(stderr, "%s: hata(%s, %s) - %d (%s)\n",
                argv[0], yol, mod, errno, strerror(errno));
        exit(1);
    }

    printf("Coded By. roissy\n");
    return(0);
}
