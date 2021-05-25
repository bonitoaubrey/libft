#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;

	little_len = ft_strlen(little);
	if (!*little)
		return ((char *)big);
	while (*big && len >= little_len)
	{
		if (*big == *little && !(ft_memcmp(big, little, little_len)))
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}
