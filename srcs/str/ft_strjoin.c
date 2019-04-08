/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 15:25:56 by mescande          #+#    #+#             */
/*   Updated: 2019/04/08 11:26:31 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char *res;

	res = ft_strnew(ft_strlen(s2) + ft_strlen(s1) + 1);
	res = ft_strcat(ft_strcpy(res, s1), s2);
	return (res);
}
