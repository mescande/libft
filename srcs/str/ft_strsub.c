/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 15:18:34 by mescande          #+#    #+#             */
/*   Updated: 2019/04/08 11:29:18 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char	*res;
	int		i;

	res = ft_strnew(len + 1);
	if (!res)
		return (0);
	i = 0;
	while (start + i < len)
	{
		res[i] = s[start + i];
		i++;
	}
	return (res);
}
