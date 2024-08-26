#include "libft.h"


char *ft_strtrim(char const *s1, char const *set)
{
    char *s;
    char *ret;
    size_t len;

    s = s1;
    while (strchr(set, *s))
        s++;
    len = strlen(s);
    while (strchr(set, s[--len]))
        ;    
    ret = malloc(len + 1);
    strlcpy(ret, s, len);
    ret[len] = '\0';
}