#include "libft.h"

void	*ft_memset(void *b, int c, size_t size)
{
	while (size--)
		((unsigned char *)b)[size] = (unsigned char)c;
	return (b);
}
