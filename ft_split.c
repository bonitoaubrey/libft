/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baubrey <baubrey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:12:58 by baubrey           #+#    #+#             */
/*   Updated: 2021/11/05 10:13:01 by baubrey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_word_count(char *s, char c)
{
	int	word_count;
	int	is_word;

	word_count = 0;
	is_word = 0;
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

int	len_word(char *s, char c)
{
	int	len;

	len = 0;
	while (*s && *s++ != c)
		len++;
	return (len);
}

void	*ft_free(char **arr, int i)
{
	while (i--)
		free(arr[i]);
	free(arr);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	char	**arr;
	int		i;
	int		word_count;

	i = 0;
	word_count = ft_word_count((char *)s, c);
	arr = malloc(sizeof(char *) * (word_count + 1));
	if (!arr)
		return (NULL);
	while (word_count--)
	{
		while (*s == c)
			s++;
		arr[i] = ft_substr(s, 0, len_word((char *)s, c));
		if (!arr)
			return (ft_free(arr, i));
		s += len_word((char *)s, c);
		i++;
	}
	arr[i] = NULL;
	return (arr);
}
