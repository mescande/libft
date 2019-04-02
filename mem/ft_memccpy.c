/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 17:42:12 by mescande          #+#    #+#             */
/*   Updated: 2019/04/02 17:46:55 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	int i;

	i = 0;
	while (i < n)
	{
		dst[i] = src[i];
		if (src[i++] == c)
			return (dst + i);
	}
	return (0);
}
