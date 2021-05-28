#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;
	int		start;
	int		finish;

	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	finish = ft_strlen(s1 + start);
	while (ft_strchr(set, s1[start + finish]))
		finish--;
	new_str = ft_substr(s1, start, finish + 1);
	if (!new_str)
		return (NULL);
	return (new_str);
}
