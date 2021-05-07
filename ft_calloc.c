#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*block;

	block = malloc(count * size);
	if (!block)
		return (NULL);
	ft_bzero(block, count * size);
	return (block);
}
