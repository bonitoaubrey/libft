#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*block;

	block = malloc(num * size);
	if (!block)
		return (NULL);
	ft_bzero(block, num *size);
	return (block);
}
