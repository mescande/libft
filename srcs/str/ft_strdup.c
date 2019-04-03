/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 18:27:49 by mescande          #+#    #+#             */
/*   Updated: 2019/04/02 18:45:42 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*s2

	while (s1[len] != '\0')
		len++;
	s2 = (char *) malloc(++len * sizeof(char));
	if (s2 == 0)
		return s2;
	while (--len >= 0)
		s2[len] = s1[len];
	return (s2);
}
