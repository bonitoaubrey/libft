#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	len_needle;

	len_needle = ft_strlen(needle);
	if (!needle[0])
		return ((char *)haystack);
	while (*haystack && len_needle <= len)
	{
		if (*haystack == *needle && !(ft_memcmp(haystack, needle, len_needle)))
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
