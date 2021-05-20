#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	while (n--)
	{
		if (*((unsigned char *)src) == (char)c)
		{
			*((unsigned char *)dst) = *((unsigned char *)src);
			return (++dst);
		}
		else
			*((unsigned char *)dst++) = *((unsigned char *)src++);
	}
	return (NULL);
}
