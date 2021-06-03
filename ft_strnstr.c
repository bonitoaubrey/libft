#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	len_s2;

	if (!*s2)
		return ((char *)s1);
	len_s2 = ft_strlen(s2);
	while (*s1 && len_s2 <= len)
	{
		if (*s1 == *s2 && !(ft_memcmp(s1, s2, len_s2)))
			return ((char *)s1);
		s1++;
		len--;
	}
	return (NULL);
}
