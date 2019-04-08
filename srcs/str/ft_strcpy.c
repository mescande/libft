/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 18:46:44 by mescande          #+#    #+#             */
/*   Updated: 2019/04/08 18:06:06 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	size_t	l;

	l = 0;
	while (src[l] != '\0')
	{
		dst[l] = src[l];
		l++;
	}
	dst[l] = '\0';
	return (dst);
}
