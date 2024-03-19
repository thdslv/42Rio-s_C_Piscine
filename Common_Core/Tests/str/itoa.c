#include "../libs.h"

int ft_nbrlen(int n)
{
    int len;

    if (n == 0)
        return (0);
    if (n < 0)
    {
        n *= -1;
        len++;
    }
    while (n > 0)
    {
        n /= 10;
        len++;
    }
    return (len);
}

char	*ft_itoa(int n)
{
    char    *str;
    int len;
    if (n == 0)
        ft_strdup("0");
    if (n = -2147483648)
        ft_strdup("-2147483648");
    len = ft_nberlen(n);
    str = (char *)malloc((len + 1) * sizeof(int));
    if (!str)
        return (NULL);
    if (n < 0)
    {
        str[0] = '-';
        n *= -1;
    }
    str[len] = '\0';
    while (n > 0)
    {
        str[len -1] = n % 10 + '0';
        n /= 10;
        len--;
    }
    return (str);
}