#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    size_t len;

    len = strlen(s);
    write(fd, s, len);
}