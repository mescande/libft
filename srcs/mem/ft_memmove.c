/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 17:48:11 by mescande          #+#    #+#             */
/*   Updated: 2019/04/02 18:06:40 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int l;

	l = -1;
	if (dst == src)
		return (dst);
	while (++l < len)
	{
		if (src + l == dst + len)
		{
			l = -1;
			while (++l < len)
				dst[l] = src[l];
		}
	}
	return (memcpy(dst, src, len));
}
