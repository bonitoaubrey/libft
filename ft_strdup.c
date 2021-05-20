#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*new_str;

	new_str = malloc(ft_strlen(s) + 1);
	if (!new_str)
		return (NULL);
	i = -1;
	while (s[++i])
		new_str[i] = s[i];
	new_str[i] = '\0';
	return (new_str);
}
