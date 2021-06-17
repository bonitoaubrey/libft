#include "libft.h"

char	*ft_strtrim(const char *s, const char *set)
{
	char	*new_str;
	int		start;
	int		finish;

	start = 0;
	while (s[start] && ft_strchr(set, s[start]))
		start++;
	finish = ft_strlen(s + start);
	while (ft_strchr(set, s[start + finish]))
		finish--;
	new_str = ft_substr(s, start, finish + 1);
	if (!new_str)
		return (NULL);
	return (new_str);
}
