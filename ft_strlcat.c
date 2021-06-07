#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	if (dst_len >= size)
		return (src_len + size);
	while (src[i] && size - 1 > dst_len)
		dst[dst_len++] = src[i++];
	dst[dst_len] = '\0';
	return (dst_len + src_len - i);
}
