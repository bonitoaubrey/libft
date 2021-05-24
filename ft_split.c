#include "libft.h"
#include <stdio.h>

int	ft_number_of_words(char const *s, char c)
{
	int	number_of_words;
	int	i;

	number_of_words = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			number_of_words++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (number_of_words);
}

char	**ft_split(char const *s, char c)
{
	char	**new_arr;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	printf("Number of words is %d\n", ft_number_of_words(s, c));
	new_arr = malloc(sizeof(char *) * ft_number_of_words(s, c) + 1);
	if (!new_arr)
		return (NULL);
	new_arr[sizeof(char *) * ft_number_of_words(s, c)] = '\0';
	while (s[i])
	{
		k = 0;
		printf("k = %d\n", k);
		printf("i = %d\n\n", i);
		while (s[i] && s[i] == c)
			i++;
		printf("k = %d\n", k);
		printf("i = %d\n\n", i);
		while (s[i] && s[i++] != c)
			k++;
		i--;
		new_arr[j] = malloc(k + 1);
		printf("k = %d\n", k);
		printf("i = %d\n\n", i);
		if (!new_arr[j])
		{
			while (j >= 0)
				free(new_arr[j--]);
			free(new_arr);
			return (NULL);
		}
		i -= k;
		k = 0;
		printf("k = %d\n", k);
		printf("i = %d\n\n", i);
		while (s[i] && s[i] != c)
			new_arr[j][k++] = s[i++];
		new_arr[j][k] = '\0';
		i++;
		j++;
		printf("k = %d\n", k);
		printf("i = %d\n", i);
		printf("new\n\n");
	}
	return (new_arr);
}
