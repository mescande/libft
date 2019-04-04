/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 17:42:12 by mescande          #+#    #+#             */
/*   Updated: 2019/04/04 17:15:35 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *restrict dst, const void *restrict src,
		int c, size_t n)
{
	size_t	i;
	char	*dsti;
	const char	*srci;


	i = 0;
	dsti = dst;
	srci = src;
	while (i < n)
	{
		dsti[i] = srci[i];
		if (srci[i++] == c)
			return (dst + i);
	}
	return (0);
}
