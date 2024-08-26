#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t len;
    char *ret;

    len = strlen(s1) + strlen(s2);
    ret = malloc(len + 1);
    if (!ret)
        return (NULL);
    strlcpy(ret, s1, len);
    strlcat(ret, s2, len);
    return (ret);
}