/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 15:18:34 by mescande          #+#    #+#             */
/*   Updated: 2019/11/06 16:12:26 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	l;
	char	*res;
	size_t	i;

	if (s == NULL)
		return (NULL);
	res = ft_strnew(len);
	if (!res)
		return (0);
	i = 0;
	l = ft_strlen(s);
	while (i < len && start + i < l)
	{
		res[i] = s[start + i];
		i++;
	}
	res[len] = '\0';
	return (res);
}
