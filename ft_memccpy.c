#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)src == (unsigned char)c)
		{
			*(unsigned char *)dest = *(unsigned char *)src;
			return (++dest);
		}
		else
			*(unsigned char *)dest++ = *(unsigned char *)src++;
	}
	return (NULL);
}
