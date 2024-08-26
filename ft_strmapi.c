#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    char *ret;
    size_t len;

    len = strlen(s);
    ret = malloc(len + 1);
    if (ret == NULL)
        return (NULL);
    i = 0;
    while (s[i])
    {
        ret[i] = f(i, s[i]);
        i++;
    }
    ret[len] = '\0';
    return ret;
}