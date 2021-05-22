#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;

	new_str = malloc(len + 1);
	if (!new_str)
		return (NULL);
	new_str[len] = '\0';
	while (len--)
		new_str[len] = s[start + len];
	return (new_str);
}
