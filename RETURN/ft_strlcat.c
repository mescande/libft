/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 10:51:38 by mescande          #+#    #+#             */
/*   Updated: 2019/11/08 15:34:42 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	i = 0;
	if (!dst && !size)
		return (ft_strlen(src));
	len = ft_strlen(dst);
	while (src[i] != '\0' && i + len < size - 1 && size != 0)
	{
		dst[len + i] = src[i];
		i++;
	}
	if (size > len)
		dst[i + len] = '\0';
	if (size < i + len)
		return (size + ft_strlen(src));
	return (len + ft_strlen(src));
}
