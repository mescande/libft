/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 22:45:38 by mescande          #+#    #+#             */
/*   Updated: 2021/01/06 16:16:56 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		alloc(void **dst, size_t n)
{
	*dst = malloc(n);
	if (*dst == NULL)
		return (0);
	return (1);
}

void	cpy(char *res, char *s2, int i, int j)
{
	while (s2[j] != '\n' && s2[j] != -1 && s2[j])
	{
		res[i + j] = s2[j];
		j++;
	}
}

char	*ft_strgnljoin(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*res;

	i = 0;
	while (s1 && s1[i])
		i++;
	j = 0;
	while (s2[j] != '\n' && s2[j] != -1 && s2[j])
		j++;
	if (!(alloc(&res, i + j + 1)))
		return (0);
	res[i + j] = 0;
	i = 0;
	j = 0;
	while (s1 && s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	cpy(res, s2, i, j);
	free(s1);
	return (res);
}

char	*ft_strndup(char *s, int i)
{
	char	*res;

	if (!(alloc(&res, i + 1)))
		return (0);
	res[i] = 0;
	while (i-- > 0)
		res[i] = s[i];
	return (res);
}
