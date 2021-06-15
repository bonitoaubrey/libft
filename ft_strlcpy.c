#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t len)
{
	size_t	srclen;

	srclen = ft_strlen(src);
	if (len--)
	{
		while (len-- && *src)
			*dst++ = *src++;
		*dst = '\0';
	}
	return (srclen);
}
