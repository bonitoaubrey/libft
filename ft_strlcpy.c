#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = -1;
	if (size--)
	{
		while (src[++i] && i < size)
			dst[i] = src[i];
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
