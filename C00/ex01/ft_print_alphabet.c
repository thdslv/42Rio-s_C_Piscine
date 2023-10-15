#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letra;

	letra = 'a';
	while (letra <= 122)
	{
		write(1, &letra, 1);
		letra++;
	}
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
