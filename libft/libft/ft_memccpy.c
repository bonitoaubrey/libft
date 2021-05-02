#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int i;

	i = 0;
	while(n--)
	{
		if (((unsigned char *)src)[i] == (unsigned char)c)
		{
			*((unsigned char *)dst) = ((unsigned char *)src)[i];
			dst++;
			return (dst);
		}
		else
		{
 			*((unsigned char *)dst) = ((unsigned char *)src)[i];
 			i++;
 			dst++;
 		}
	}
	return (NULL);
}
