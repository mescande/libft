/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 17:37:42 by mescande          #+#    #+#             */
/*   Updated: 2019/11/14 14:17:34 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dsti;
	char	*srci;

	dsti = (char *)dst;
	srci = (char *)src;
	if (n == 0 || (dst == NULL && src == NULL))
		return (dst);
	while (--n > 0)
		dsti[n] = srci[n];
	dsti[0] = srci[0];
	return (dst);
}
