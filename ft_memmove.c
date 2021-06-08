#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t size)
{
	if (dst > src)
		while (size--)
			((unsigned char *)dst)[size] = ((unsigned char *)src)[size];
	else
		ft_memcpy(dst, src, size);
	return (dst);
}
