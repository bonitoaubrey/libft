#include "libft.h"

int	numlen(int i)
{
	int	len;

	len = 0;
	if (i == 0)
		return (1);
	if (i < 0)
	{
		i *= -1;
		len++;
	}
	while (i)
	{
		i /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*num;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = numlen(n);
	num = malloc(i + 1);
	if (!num)
		return (NULL);
	num[i--] = '\0';
	if (n == 0)
		num[0] = '0';
	if (n < 0)
	{
		num[0] = '-';
		n *= -1;
	}
	while (n)
	{
		num[i] = n % 10 + '0';
		n /= 10;
		i--;
	}
	return (num);
}
