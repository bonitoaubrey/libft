#include "libft.h"

int	ft_isspace(char c)
{
	return (c == ' ' || c == '\n' || c == '\t'
		|| c == '\r' || c == '\v' || c == '\f');
}

int	ft_atoi(const char *s)
{
	int	num;
	int	minus;

	minus = 1;
	num = 0;
	while (ft_isspace(*s))
		s++;
	if (*s == '-' || *s == '+')
		if (*s++ == '-')
			minus = -1;
	while (ft_isdigit(*s))
		num = num * 10 + *s++ - '0';
	return (num * minus);
}
