#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*new_str;
	unsigned int	i;

	new_str = malloc(ft_strlen(s) + 1);
	if (!new_str)
		return (NULL);
	i = -1;
	while (s[++i])
		new_str[i] = f(i, s[i]);
	new_str[i] = '\0';
	return (new_str);
}
