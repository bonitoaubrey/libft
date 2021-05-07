#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	char	*tmp;
	size_t	i;

	i = 0;
	if (!s1 && !s2)
		return (NULL);
	if (!s1 && s2)
		i = ft_strlen(s2) + 1;
	else if (s1 && s2)
		i = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = malloc(sizeof(*str) * i);
	if (!str)
		return (NULL);
	tmp = str;
	if (s1)
		while (*s1)
			*tmp++ = *s1++;
	if (s2)
		while (*s2)
			*tmp++ = *s2++;
	*tmp = '\0';
	return (str);
}
