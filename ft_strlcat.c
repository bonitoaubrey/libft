#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;
	size_t	len_d;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	i = 0;
	len_d = len_dst;
	if (dstsize <= len_dst)
		return (dstsize + len_src);
	while (len_dst < dstsize - 1 && src[i])
		dst[len_dst++] = src[i++];
	dst[len_dst] = '\0';
	return (len_d + len_src);
}
