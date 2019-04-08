/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 18:21:48 by mescande          #+#    #+#             */
/*   Updated: 2019/04/08 13:39:40 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_strstrcpy(char **dst, char **src)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (src[i] != 0)
	{
		j = 0;
		while (src[i][j] != 0)
		{
			dst[i][j] = src[i][j];
			j++;
		}
		i++;
	}
	return (dst);
}

static char	*ft_strrealloc(size_t size, char *src)
{
	char *new;

	new = ft_memalloc(size);
	if (new == 0)
		return (0);
	new = ft_strcpy(new, src);
	free(src);
	return (new);
}

static char	**ft_strstrrealloc(size_t size, char **src)
{
	char	**new;
	size_t	i;

	i = 0;
	new = ft_memalloc(size);
	while (src[i] != '\0')
		ft_strrealloc(ft_strlen(src[i]), src[i]);
	new = ft_strstrcpy(new, src);
	free(src);
	return (new);
}

char		**ft_strsplit(const char *s, char c)
{
	char	**res;
	char	sep[2];
	size_t	i;

	sep[0] = c;
	sep[1] = '\0';
	res = (char **)malloc(ft_strlen(s) * sizeof(char *));
	i = 0;
	res[i] = ft_strtok((char *)s, sep);
	while (res[i++])
		res[i] = ft_strtok(0, sep);
	res = ft_strstrrealloc(i, res);
	return (res);
}
