/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 11:34:25 by mescande          #+#    #+#             */
/*   Updated: 2019/04/10 09:51:08 by mescande         ###   ########.fr       */
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

char		*ft_strtok(char *restrict str, const char *restrict sep)
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
	res = sttc_str;
	sttc_str[len] = '\0';
	sttc_str += len + 1;
	return (res);
}
