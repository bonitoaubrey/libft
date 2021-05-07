#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;
	char	*tmp;

	copy = malloc(ft_strlen(s1) + 1);
	tmp = copy;
	if (!copy)
		return (NULL);
	while (*s1)
		*tmp++ = *s1++;
	*tmp = '\0';
	return (copy);
}
