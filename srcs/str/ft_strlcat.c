/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 10:51:38 by mescande          #+#    #+#             */
/*   Updated: 2019/04/08 11:26:45 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	size_t	len;
	size_t	i;

	len = 0;
	i = 0;
	while (dst[len] != '\0' && len < size - 1)
		len++;
	if (len == size - 1)
		return (size);
	while (src[i] != '\0' && i + len < size - 1)
	{
		dst[len + i] = src[i];
		i++;
	}
	dst[i + len] = '\0';
	return (i + len);
}
