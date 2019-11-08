/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 15:37:49 by mescande          #+#    #+#             */
/*   Updated: 2019/11/07 19:13:41 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	testsep(char *str, const char *set)
{
	size_t	len;
	size_t	n;

	len = ft_strlen(set);
	n = 0;
	while (n < len)
		if (*str == set[n++])
			return (1);
	return (0);
}

char		*ft_strtrim(const char *s1, const char *set)
{
	char	*res;
	char	*cpy;
	size_t	len;

	if (s1 == NULL)
		return (NULL);
	cpy = (char *)s1;
	while (*cpy && testsep(cpy, set))
		cpy++;
	if (!*cpy)
		return (ft_memalloc(1));
	len = ft_strlen(cpy);
	while (testsep(cpy + len - 1, set))
		len--;
	res = ft_strnew(len);
	if (res == 0)
		return (0);
	res = ft_memcpy(res, cpy, len + 1);
	res[len] = 0;
	return (res);
}
