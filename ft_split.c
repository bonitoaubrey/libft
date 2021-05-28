#include "libft.h"

int	ft_number_of_words(char *s, char c)
{
	int	number_of_words;
	int	is_word;

	number_of_words = 0;
	is_word = 0;
	while (*s)
	{
		if (*s == c && is_word == 1)
			is_word = 0;
		else if (*s != c && !is_word)
		{
			is_word = 1;
			number_of_words++;
		}
		s++;
	}
	return (number_of_words);
}

int	ft_word_len(char *s, char c)
{
	int	len;

	len = 0;
	while (*s != c && *s++)
		len++;
	return (len);
}

void	*ft_free(char **new_arr, int i)
{
	while (i--)
		free (new_arr[i]);
	free (new_arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**new_arr;
	int		number_of_words;
	int		i;

	number_of_words = ft_number_of_words((char *)s, c);
	new_arr = malloc(sizeof(char *) * (number_of_words + 1));
	if (!new_arr)
		return (NULL);
	i = 0;
	while (number_of_words--)
	{
		while (*s == c && *s)
			s++;
		new_arr[i] = ft_substr(s, 0, ft_word_len((char *)s, c));
		if (!new_arr[i])
			return (ft_free(new_arr, i));
		s += ft_word_len((char *)s, c);
		i++;
	}
	new_arr[i] = NULL;
	return (new_arr);
}
