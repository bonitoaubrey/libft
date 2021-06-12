#include "libft.h"

void	ft_bzero(void *b, size_t size)
{
	while (size--)
		((unsigned char *)b)[size] = '\0';
}
