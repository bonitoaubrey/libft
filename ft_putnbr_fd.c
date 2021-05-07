#include "libft.h"

static void	ft_print_num(long int n, int fd)
{
	if (n > 9)
		ft_print_num(n / 10, fd);
	ft_putchar_fd((n % 10 + '0'), fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_print_num((long int)n * (-1), fd);
	}
	else
		ft_print_num((long int)n, fd);
}
