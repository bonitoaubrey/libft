#include "libft.h"

int	ft_number_of_words(char *s, char c)
{
	int	i;
	int	is_word;

	i = 0;
	is_word = 0;
	while (*s)
	{
		if (is_word == 0 && *s != c)
		{
			is_word = 1;
			i++;
		}
		else if (is_word == 1 && *s == c)
			is_word = 0;
		s++;
	}
	return (i);
}

int	ft_strlenword(char *s, char c)
{
	int	len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

void	*my_free(char **new_arr, int i)
{
	while (i-- > 0)
		free(new_arr[i]);
	free (new_arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**new_arr;
	int		number_of_words;
	int		i;

	if (!s)
		return (NULL);
	number_of_words = ft_number_of_words((char *)s, c);
	new_arr = (char **)malloc((number_of_words + 1) * sizeof(char *));
	if (!new_arr)
		return (NULL);
	i = 0;
	while (number_of_words--)
	{
		while (*s == c && *s != '0')
			s++;
		new_arr[i] = ft_substr((char *)s, 0, ft_strlenword((char *)s, c));
		if (!new_arr[i])
			return (my_free(new_arr, i));
		s = s + ft_strlenword((char *)s, c);
		i++;
	}
	new_arr[i] = NULL;
	return (new_arr);
}
