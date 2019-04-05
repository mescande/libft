/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 19:01:40 by mescande          #+#    #+#             */
/*   Updated: 2019/04/05 19:11:17 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*res;
	size_t	i;

	res = ft_strnew(11);
	i = 9
	while (n > 10)
	{
		res[i--] = n % 10;
		n /= 10;
	}
	while (*res == 0)
		res++;
	return (res);
}