#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*tmp;

	tmp = s;
	while (n--)
	{
		if (*tmp != c)
			tmp++;
		else
			return ((char *)tmp);
	}
	return (NULL);
}
