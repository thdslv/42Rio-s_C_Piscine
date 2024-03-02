#include <unistd.h>
#include <stdio.h>

void repeat_alpha(char *str)
{
    while (*str)
    {
        if (*str >= 'A' && *str <= 'Z')
        {
            int repetitions = *str - 'A' + 1;
            while (repetitions > 0)
            {
                putchar(*str);
                repetitions--;
            }
            str++;
        }
        else if (*str >= 'a' && *str <= 'z')
        {
            int repetitions = *str - 'a' + 1;
            while (repetitions > 0)
            {
                putchar(*str);
                repetitions--;
            }
            str++;
        }
        else 
        {
            putchar(*str);
            str++;
        }
    }
}

int main(int argc, char **argv) {
    char *str = "!a!bc!!";
    repeat_alpha(str);
    return (0);
}