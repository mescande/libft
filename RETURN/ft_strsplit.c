/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 18:21:48 by mescande          #+#    #+#             */
/*   Updated: 2019/04/10 14:55:50 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	testsep(char *str, const char *restrict sep)
{
	size_t	len;
	size_t	n;

	len = ft_strlen(sep);
	n = 0;
	while (n < len)
		if (*str == sep[n++])
			return (1);
	return (0);
}

static char	*ft_malstrtok(char *restrict str, const char *restrict sep)
{
	static char	*sttc_str;
	size_t		len;
	size_t		n;
	char		*res;

	n = 0;
	len = 0;
	if (str != NULL)
		sttc_str = str;
	while (testsep(sttc_str, sep))
		sttc_str++;
	if (*sttc_str == 0)
		return (0);
	while (!testsep(sttc_str + len, sep))
		len++;
	if (!(res = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	while (n < len)
		res[n++] = (char)*(sttc_str++);
	res[n] = '\0';
	return (res);
}

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
	res[i] = ft_malstrtok((char *)s, sep);
	while (res[i++])
		res[i] = ft_malstrtok(0, sep);
	return (res);
}
