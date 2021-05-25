#include "libft.h"

int	ft_isspace(int c)
{
	if (c == ' ' || c == '\t' || c == '\n'
		|| c == '\r' || c == '\v' || c == '\f')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *s)
{
	int	n;
	int	i;
	int	minus;

	n = 0;
	i = 0;
	minus = 1;
	while (ft_isspace(s[i]))
		i++;
	if (s[i] == '-')
		minus *= -1;
	if (s[i] == '-' || s[i] == '+')
		i++;
	while (ft_isdigit(s[i]))
		n = n * 10 + s[i++] - '0';
	return (n * minus);
}
