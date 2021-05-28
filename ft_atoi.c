#include "libft.h"

int	ft_is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n'
		|| c == '\r' || c == '\v' || c == '\f');
}

int	ft_atoi(const char *s)
{
	int	num;
	int	i;
	int	minus;

	num = 0;
	i = 0;
	minus = 1;
	while (ft_is_space(s[i]))
		i++;
	if (s[i] == '-' || s[i] == '+')
		if (s[i++] == '-')
			minus *= -1;
	while (ft_isdigit(s[i]))
		num = num * 10 + s[i++] - '0';
	return (num * minus);
}
