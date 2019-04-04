/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 11:15:53 by mescande          #+#    #+#             */
/*   Updated: 2019/04/04 18:19:49 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	pos;
	char	lfi;

	lfi = (char)c;
	pos = 0;
	while (s[pos] != '\0')
		pos++;
	while (pos != 0)
	{
		if (s[pos] == lfi)
			return ((char *)(s + pos));
		pos--;
	}
	if (pos == 0 && s[pos] == lfi)
		return ((char *)s);
	return (0);
}
