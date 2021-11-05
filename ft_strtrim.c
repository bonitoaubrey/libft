/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baubrey <baubrey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:12:08 by baubrey           #+#    #+#             */
/*   Updated: 2021/11/05 10:12:11 by baubrey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
