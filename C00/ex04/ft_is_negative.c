#include <unistd.h>

void	ft_is_negative(int n)
{
	char	pos;
	char	neg;

	pos = 'P';
	neg = 'N';
	if (n < 0)
		write(1, &neg, 1);
	else
		write(1, &pos, 1);
}

int	main(void)
{
	ft_is_negative(42);
	return (0);
}
