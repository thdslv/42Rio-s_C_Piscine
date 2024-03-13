#include <unistd.h>

int check(int c, char *str, int index)
{
    int i = 0;

    while (i < index)
    {
        if (str[i] == c)
            return (0);
        i++;
    }
    return (1);
}

int main(int argc, char **argv)
{
    if (argc == 3)
    {
        int i = 0;
        while (argv[1][i])
            i++;
        int j = 0;
        while(argv[2][j])
        {
            argv[1][i] = argv[2][j];
            i++;
            j++;
        }
        i--;
        int k = 0;
        while (k <= i)
        {
            if (check(argv[1][k], argv[1], k))
                write(1, &argv[1][k], 1);
            k++;
        }
    }
    write(1, "\n", 1);
}