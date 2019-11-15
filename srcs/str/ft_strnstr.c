/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 11:40:12 by mescande          #+#    #+#             */
/*   Updated: 2019/11/08 15:40:24 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	pos;
	size_t	srch;

	pos = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (pos < len && haystack[pos] != '\0')
	{
		srch = 0;
		while (haystack[pos + srch] != '\0' && needle[srch] != '\0' &&
				haystack[pos + srch] == needle[srch] && pos + srch < len)
			srch++;
		if (needle[srch] == '\0')
			return ((char *)(haystack + pos));
		pos++;
	}
	return (0);
}
