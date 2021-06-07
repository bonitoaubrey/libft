#include "libft.h"

char	*ft_strnstr(const char *dst, const char *src, size_t n)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (!*src)
		return ((char *)dst);
	while (n > src_len)
	{
		if (*dst == *src && !(ft_memcmp(dst, src, src_len)))
			return ((char *)dst);
		dst++;
		n--;
	}
	return (NULL);
}
