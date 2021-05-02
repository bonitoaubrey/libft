#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*tmp;

	tmp = s;
	while (n--)
		*tmp++ = '\0';
}
