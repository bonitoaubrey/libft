#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*c1;
	const unsigned char	*c2;

	c1 = s1;
	c2 = s2;
	while (n--)
	{
		if (*c1 == *c2)
		{
			c1++;
			c2++;
		}
		else
			return (*c1 - *c2);
	}
	return (0);
}
