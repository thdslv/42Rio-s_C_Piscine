#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        write(1, "Uso: ./alpha mirror [string].", 29);
        return (0);
    }
    int i = 0;
    while (argv[2][i])
    {
        if (argv[2][i] >= 'A' && argv[2][i] <= 'Z')
            argv[2][i] = 'Z' - argv[2][i] + 'A';
        else if (argv[2][i] >= 'a' && argv[2][i] <= 'z')
            argv[2][i] = 'z' - argv[2][i] + 'a';
        write(1, &argv[2][i], 1);
        i++;
    }
    write(1, "\n", 1);
    return (0);
}