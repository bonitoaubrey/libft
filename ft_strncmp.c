#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t size)
{
	while (size--)
		if (*s1++ != *s2++)
			return (*--s1 - *--s2);
	return (0);
}
