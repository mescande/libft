/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 11:34:25 by mescande          #+#    #+#             */
/*   Updated: 2019/04/05 12:15:42 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int	testsep(static char *str, const char *restrict sep)
{
	size_t	len;
	size_t	n;

	len = ft_strlen(sep);
	n = 0;
	while(n < len)
		if (sttc_str == sep[n++])
			return (1);
	return (0);
}

char	*strtok(char *restrict str, const char *restrict sep)
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
	while (!testsep(sttc_str + len, sep))
		len++;
	if (!res = (char *)malloc((len + 1) * sizeof(char)))
		return (NULL);
	while (n < len)
		res[n++] = (char *)sttc_str++;
	res[n] = '\0';
	return (res);
}
