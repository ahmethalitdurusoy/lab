#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <sys/stat.h>

/* Coded By. roissy */

int main(int argc, char **argv)
{
    char mod[] = "0777";
    char yigin[100] = "/home/elise/Masaüstü/bokgirersin.txt";
    int i;
    i = strtol(mod, 0, 8);
    if (chmod (yigin,i) < 0)
    {
        fprintf(stderr, "%s: hata(%s, %s) - %d (%s)\n",
                argv[0], yigin, mod, errno, strerror(errno));
        exit(1);
    }

    printf("Coded By. elise, Bug Researchers-CW ^^\n");
    return(0);
}
