/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baubrey <baubrey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:12:04 by baubrey           #+#    #+#             */
/*   Updated: 2021/11/05 10:12:07 by baubrey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*new_str;

	new_str = malloc(len + 1);
	if (!new_str)
		return (NULL);
	new_str[len] = '\0';
	while (len--)
		new_str[len] = s[len + start];
	return (new_str);
}
