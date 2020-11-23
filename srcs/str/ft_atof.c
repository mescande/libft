/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 11:04:55 by user42            #+#    #+#             */
/*   Updated: 2020/11/16 16:58:42 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

static double	exponential(double res, int e, int sign)
{
	while (e > 0)
	{
		res *= 10;
		e--;
	}
	while (e < 0)
	{
		res *= 0.1;
		e++;
	}
	return (res * sign);
}

double			ft_atof(const char *str)
{
	double	res;
	int		e;
	int		i;
	int		sign;

	e = 0;
	res = 0.0;
	sign = (*str == '-' ? -1 : 1);
	str += (sign < 0 || *str == '+' ? 1 : 0);
	while (*str != 0 && ft_isdigit(*str))
		res = res * 10 + (*str++ - '0');
	if (*str++ == '.')
		while (*str != 0 && ft_isdigit(*str))
			res = res * 10 + (*str++ - '0') + (--e == 0);
	if (*str == 'e' || *str - 1 == 'e')
	{
		if (*(++str) == '+')
			sign = 1 + (str++ == 0);
		else if (*str == '-')
			sign = -1 + (str++ == 0);
		while (ft_isdigit(*str))
			i = i * 10 + (*str++ - '0');
		e += i * sign;
	}
	return (exponential(res, e, sign));
}
