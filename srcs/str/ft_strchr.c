/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 11:10:14 by mescande          #+#    #+#             */
/*   Updated: 2019/04/03 11:15:20 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*strchr(const char *s, int c)
{
	size_t	pos;
	char	lfi;

	lfi = (char) c;
	while (s[pos] != '\0')
	{
		if (s[pos] == lfi)
			return (s + pos);
		pos++;
	}
	return (0);
}
