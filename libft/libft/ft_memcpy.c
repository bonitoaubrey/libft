#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int	i;

	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (n--)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
