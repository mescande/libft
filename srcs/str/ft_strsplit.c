/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 18:21:48 by mescande          #+#    #+#             */
/*   Updated: 2019/04/09 20:40:19 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		**ft_strsplit(const char *s, char c)
{
	char	**res;
	char	sep[2];
	size_t	i;

	sep[0] = c;
	sep[1] = '\0';
	if (s == 0)
		return (NULL);
	res = (char **)malloc(ft_strlen(s) * sizeof(char *));
	if (res == NULL)
		return (NULL);
	i = 0;
	res[i] = ft_strtok((char *)s, sep);
	while (res[i++])
		res[i] = ft_strtok(0, sep);
	return (res);
}
