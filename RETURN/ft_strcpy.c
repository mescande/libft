/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 18:46:44 by mescande          #+#    #+#             */
/*   Updated: 2019/04/02 18:58:52 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strcpy(char *dst, const char *src)
{
	size_t	len;

	len = 0;
	while (src[len] != '\0')
	{
		dst[len] = src[len];
		len++;
	}
	return (dst);
}
