/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 15:42:39 by mescande          #+#    #+#             */
/*   Updated: 2019/11/05 17:15:44 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;

	i = -1;
	while (src[i] != 0 && i < dstsize - 1)
		dst[i] = src[i];
	if (dstsize != 0)
		dst[i] = 0;
	return (ft_strlen(src));
}
