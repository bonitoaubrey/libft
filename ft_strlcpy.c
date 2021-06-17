#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	srclen;

	srclen = ft_strlen(src);
	if (size--)
	{
		while (size-- && *src)
			*dst++ = *src++;
		*dst = '\0';
	}
	return (srclen);
}
