#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	letra;

	letra = 'z';
	while (letra >= 97)
	{
		write(1, &letra, 1);
		letra--;
	}
}

int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
