#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t size)
{
	while (size--)
	{
		if (*(unsigned char *)src == (unsigned char)c)
		{
			*(unsigned char *)dst = *(unsigned char *)src;
			return (++dst);
		}
		else
			*(unsigned char *)dst++ = *(unsigned char *)src++;
	}
	return (NULL);
}
