#include "libft.h"

void	*ft_memchr(const void *b, int c, size_t size)
{
	while (size--)
		if (*(unsigned char *)b++ == (unsigned char)c)
			return ((void *)--b);
	return (NULL);
}
