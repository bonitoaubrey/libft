/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baubrey <baubrey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:13:39 by baubrey           #+#    #+#             */
/*   Updated: 2021/11/05 10:13:42 by baubrey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t size)
{
	if (dst > src)
		while (size--)
			((unsigned char *)dst)[size] = ((unsigned char *)src)[size];
	else
		ft_memcpy(dst, src, size);
	return (dst);
}
