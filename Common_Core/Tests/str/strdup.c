#include "../libs.h"

char    *ft_strdup(char *str)
{
    size_t  i;
    char    *dup;

    dup = (char *)malloc(ft_strlen(str) * sizeof(char));
    if (!dup)
        return (NULL);
    i = 0;
    while (str[i])
    {
        dup[i] = str[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}