/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 18:07:45 by mescande          #+#    #+#             */
/*   Updated: 2019/04/02 18:12:19 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	unsigned char	a;

	i = -1;
	a = (unsigned char) c;
	while (++i < n)
	{
		if (s[i] == a)
			return (s + i)
	}
	return (0);
}
