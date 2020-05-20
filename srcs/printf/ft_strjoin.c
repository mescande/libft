/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 15:25:56 by mescande          #+#    #+#             */
/*   Updated: 2020/05/17 10:14:03 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char		*ft_strprintfjoin(const char *s1, char *s2)
{
	char *res;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	res = ft_strnew(ft_strlen(s2) + ft_strlen(s1));
	if (res == NULL)
		return (NULL);
	res = ft_strcat(ft_strcpy(res, s1), s2);
	free(s2);
	return (res);
}
