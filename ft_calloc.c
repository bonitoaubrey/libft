#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*block;

	block = malloc(nmemb * size);
	if (!block)
		return (NULL);
	ft_bzero(block, nmemb * size);
	return (block);
}
