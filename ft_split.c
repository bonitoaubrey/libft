#include "libft.h"

int	ft_word_count(char *s, char c)
{
	size_t	word_count;
	int		is_word;

	is_word = 0;
	word_count = 0;
	while (*s)
	{
		if (is_word == 0 && *s != c)
		{
			is_word = 1;
			word_count++;
		}
		else if (is_word == 1 && *s == c)
			is_word = 0;
		s++;
	}
	return (word_count);
}

size_t	ft_lenword(char *s, char c)
{
	size_t	lenword;

	lenword = 0;
	while (*s != c && *s++)
		lenword++;
	return (lenword);
}

void	*ft_free(char **arr, int i)
{
	while (i--)
		free(arr[i]);
	free (arr);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	char	**arr;
	int		word_count;
	int		i;

	word_count = ft_word_count((char *)s, c);
	arr = malloc(sizeof(char *) * (word_count + 1));
	if (!arr)
		return (NULL);
	i = 0;
	while (word_count--)
	{
		while (*s == c && *s)
			s++;
		arr[i] = ft_substr(s, 0, ft_lenword((char *)s, c));
		if (!arr[i])
			return (ft_free(arr, i));
		s += ft_lenword((char *)s, c);
		i++;
	}
	arr[i] = NULL;
	return (arr);
}
