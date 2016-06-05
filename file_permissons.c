#include <sys/stat.h>

/* Coded By. roissy */

int main(void)
{
    struct stat st;
    mode_t mode;
    const char *path = "/etc/passwd";

    stat(path, &st);

    mode = st.st_mode & 07777;

    // Change Permission
    mode &= ~(S_IRUSR);    /* Permission reset */
    mode |= S_IXUSR;       /* Change Permission */

    chmod(path, mode);

    return 0;
}
