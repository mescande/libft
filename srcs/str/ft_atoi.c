/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 12:15:09 by mescande          #+#    #+#             */
/*   Updated: 2021/01/16 16:30:18 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *str)
{
	long long	i;
	long long	j;
	long long	res;

	i = 0;
	j = 1;
	res = 0;
	while (*str == '\n' || *str == '\t' || *str == ' ' ||
			*str == '\v' || *str == '\f' || *str == '\r')
		str++;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			j = -1;
	while (str[i] >= '0' && str[i] <= '9')
		res = res * 10 + j * (str[i++] - '0');
	return (res);
}
