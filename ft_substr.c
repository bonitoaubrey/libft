#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	int		i;

	i = 0;
	new_str = malloc(len + 1);
	if (!new_str)
		return (NULL);
	while (len-- && s[start])
		new_str[i++] = s[start++];
	new_str[i] = '\0';
	return (new_str);
}
