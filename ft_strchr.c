#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*tmp;
	int			i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			tmp = &s[i];
			return ((char *)tmp);
		}	
		i++;
	}
	if (!c)
		return (&((char *)s)[i]);
	return (NULL);
}
