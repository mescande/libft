/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 18:12:56 by mescande          #+#    #+#             */
/*   Updated: 2019/04/02 18:21:41 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	memcmp(const void *s1, const void *s2, size_t n)
{
	int				i;
	unsigned char	c[2];

	i = 0
	while (i < n && s1[i] == s2[i])
		i++;
	if (i == n)
		return (0);
	c[0] = (unsigned char) s1[i];
	c[1] = (unsigned char) s2[i];
	i = (int) (c[0] - c[1]);
	return (i);
}
