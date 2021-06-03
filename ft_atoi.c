#include "libft.h"

int	ft_isspace(char c)
{
	return (c == '\t' || c == '\n' || c == ' '
		|| c == '\v' || c == '\r' || c == '\f');
}

int	ft_atoi(const char *s)
{
	int	num;
	int	minus;
	int	i;

	num = 0;
	minus = 1;
	i = 0;
	while (ft_isspace(s[i]))
		i++;
	if (s[i] == '+' || s[i] == '-')
		if (s[i++] == '-')
			minus *= -1;
	while (ft_isdigit(s[i]))
		num = num * 10 + s[i++] - '0';
	return (num * minus);
}
