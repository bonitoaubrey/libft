#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	while (dstsize - 1 > dst_len && src[i])
		dst[dst_len++] = src[i++];
	dst[dst_len] = '\0';
	return (dst_len + src_len - i);
}
