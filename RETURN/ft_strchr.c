/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 11:10:14 by mescande          #+#    #+#             */
/*   Updated: 2019/04/08 18:42:24 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	pos;
	char	lfi;

	lfi = (char)c;
	pos = 0;
	while (s[pos] != '\0')
	{
		if (s[pos] == lfi)
			return ((char *)(s + pos));
		pos++;
	}
	return (NULL);
}
