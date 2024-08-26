#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t ret_len;
    char *ret;

    ret_len = strlen(s) - start;
    if (len < ret_len)
        ret_len = len;
    ret = malloc(ret_len + 1);
    strncpy(ret, s + start, ret_len);
    ret[ret_len] = '\0';
    return (ret);
}