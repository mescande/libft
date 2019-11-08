/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 18:12:42 by mescande          #+#    #+#             */
/*   Updated: 2019/11/05 18:25:44 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;

	if (!len || !s || !(res = ft_memalloc(len * sizeof(char))))
		return (NULL);
	while (s[start + i] && i < len)
	{
		res[i] = s[start + i];
	}
	return (res);
}
