/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 14:45:10 by mescande          #+#    #+#             */
/*   Updated: 2019/04/05 14:55:31 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	char *res;
	char *tmp;

	res = ft_strnew(ft_strlen(s));
	tmp = res;
	while (s != '\0')
		tmp++ = f(*(s++));
	return (res);
}
