/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 12:15:09 by mescande          #+#    #+#             */
/*   Updated: 2019/04/03 16:57:48 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_atoi(const char *str)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (*str == '\n' || *str == '\t' || *str == ' ' ||
			*str == '\v' || *str == '\f' || *str == '\r')
		str++;
	if (*str == '-')
	{
		j = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	i--;
	if (str[i] >= '0' && str[i] <= '9')
	{
		j *= str[i];
		str[i] = '\0';
		return (i = 0 ? j : j + (10 * ft_atoi(str)));
	}
	return (0);
}
