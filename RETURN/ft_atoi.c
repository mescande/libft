/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 12:15:09 by mescande          #+#    #+#             */
/*   Updated: 2019/04/04 13:32:14 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_atoi(const char *str)
{
	int	i;
	int	j;
	int	res;

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
	{
		if (j == -1)
			res = res * 10 - (str[i++] - '0');
		else
			res = res * 10 + (str[i++] - '0');
	}
	return (res);
}
