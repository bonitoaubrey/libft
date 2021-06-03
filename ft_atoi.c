#include "libft.h"

int	ft_isspace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n'
		|| c == '\r' || c == '\v' || c == '\f');
}

int	ft_atoi(const char *s)
{
	int	n;
	int	minus;

	n = 0;
	minus = 1;
	while (ft_isspace(*s))
		s++;
	if (*s == '-' || *s == '+')
		if (*s++ == '-')
			minus *= -1;
	while (ft_isdigit(*s))
		n = n * 10 + *s++ - '0';
	return (n * minus);
}
