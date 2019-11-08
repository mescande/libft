/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 15:37:49 by mescande          #+#    #+#             */
/*   Updated: 2019/11/05 18:47:13 by mescande         ###   ########.fr       */
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

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*res;
	char	*cpy;
	size_t	len;

	if (s == NULL)
		return (NULL);
	cpy = (char *)s;
	while (testsep(cpy, set))
		cpy++;
	len = ft_strlen(cpy);
	res = ft_strnew(len);
	if (res == 0)
		return (0);
	res = ft_strcpy(res, cpy);
	len--;
	while (testsep(res + len, set))
		res[len--] = '\0';
	cpy = ft_strnew(ft_strlen(res));
	cpy = ft_strcpy(cpy, res);
	free(res);
	return (cpy);
}
