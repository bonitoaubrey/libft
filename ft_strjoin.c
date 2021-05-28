#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		i;

	new_str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!new_str)
		return (NULL);
	i = 0;
	while (*s1)
		new_str[i++] = *(char *)s1++;
	while (*s2)
		new_str[i++] = *(char *)s2++;
	new_str[i] = '\0';
	return (new_str);
}
