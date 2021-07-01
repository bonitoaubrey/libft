#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t size)
{
	size_t	i;

	i = -1;
	while (++i < size)
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
	return (dst);
}
