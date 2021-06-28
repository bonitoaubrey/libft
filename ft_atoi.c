#include "libft.h"

int	ft_atoi(const char *s)
{
	int				i;
	int				sign;
	int				num;

	i = 0;
	sign = 1;
	num = 0;
	while ((s[i] >= 9 && s[i] <= 13) || s[i] == ' ')
		i++;
	if (s[i] == '-' || s[i] == '+')
		if (s[i++] == '-')
			sign = -1;
	while (s[i] >= '0' && s[i] <= '9')
		num = num * 10 + s[i++] - '0';
	return ((int)num * sign);
}
