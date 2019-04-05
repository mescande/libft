/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 18:21:48 by mescande          #+#    #+#             */
/*   Updated: 2019/04/05 19:01:20 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//TODO : finir parce que la vraiment je veux pas...

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

char		**ft_strsplit(const char *s, char c)
{
	char	**res;
	char	**tmp;
	size_t	compteurs[2];

	bzero(compteurs, 2);
	res = (char **)malloc(10 * sizeof(char *));
	res[compteur[0]] = (char *)malloc(10 * sizeof(char));
	while (s[compteurs[2]] != '\0')
	{
		if (compteurs[0] % 10 == 0)
		{
			tmp = res;
			res = malloc(10 * sizeof(char*) * (i % 10));
			res = ft_strstrcpy(res, tmp);
			free(tmp);
		}
		if (s[compteurs[2]] == c)
			if (s[compteurs[2]++ - 1] != c)
			{
				compteurs[0]++;
				compteurs[1] = 0;
			}
		else
		{
			if (compteurs[1] % 10 == 0)
			{
			}
			res[compteurs[0]][compteurs[1]] = s[compteurs[2]++];
		}
	}
	return (res)
}
