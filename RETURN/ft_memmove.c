/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 17:48:11 by mescande          #+#    #+#             */
/*   Updated: 2019/04/08 17:51:25 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	l;
	char	*dsti;
	char	*srci;

	l = -1;
	dsti = (char *)dst;
	srci = (char *)src;
	if (dst == src)
		return (dst);
	while (++l < len)
	{
		if (src + l == dst + len)
		{
			l = -1;
			while (++l < len)
				dsti[l] = srci[l];
			return (dst);
		}
	}
	return (memcpy(dst, src, len));
}
