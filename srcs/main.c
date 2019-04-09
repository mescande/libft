/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 16:12:07 by mescande          #+#    #+#             */
/*   Updated: 2019/04/09 19:49:35 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int		main(void)
{
/*
	printf("ft_atoi\nvrai :\t%d\n", atoi("\n\t \t 111\n \t000  "));
	printf("mien :\t%d\n\n", ft_atoi("\n\t \t 111\n \t000  "));

	char *them;
	char *mine;
	them = ft_strnew(10);
	mine = ft_strnew(10);
	bzero(them, 10);
	ft_bzero(mine, 10);
	printf("bzero\nvrai :\t%s\n", (them));
	printf("mien :\t%s\n\n", (mine));

	printf("isalnum\nvrai :\t%d\n", isalnum('a'));
	printf("mien :\t%d\n", ft_isalnum('a'));
	printf("vrai :\t%d\n", isalnum(')'));
	printf("mien :\t%d\n\n", ft_isalnum(')'));

	printf("isalpha\nvrai :\t%d\n", isalpha('a'));
	printf("mien :\t%d\n", ft_isalpha('a'));
	printf("vrai :\t%d\n", isalpha('1'));
	printf("mien :\t%d\n\n", ft_isalpha('1'));

	printf("isascii\nvrai :\t%d\n", isascii('a'));
	printf("mien :\t%d\n", ft_isascii('a'));
	printf("vrai :\t%d\n", isascii(360));
	printf("mien :\t%d\n\n", ft_isascii(360));

	printf("isdigit\nvrai :\t%d\n", isdigit('1'));
	printf("mien :\t%d\n", ft_isdigit('1'));
	printf("vrai :\t%d\n", isdigit('a'));
	printf("mien :\t%d\n\n", ft_isdigit('a'));

	printf("isprint\nvrai :\t%d\n", isprint('a'));
	printf("mien :\t%d\n", ft_isprint('a'));
	printf("vrai :\t%d\n", isprint(123456));
	printf("mien :\t%d\n\n", ft_isprint(123456));

	char	src1[10] = "ceciestun";
	char	src2[10] = "ceciestun";
	them = (char *)memccpy(them, src1, 'i', 8);
	mine = (char *)ft_memccpy(mine, src2, 'i', 8);
	printf("memccpy\nvrai :\t%s\n", them);
	printf("mien :\t%s\n", mine);
	them = (char *)memccpy(them, src1, 'a', 10);
	mine = (char *)ft_memccpy(mine, src2, 'a', 10);
	printf("vrai :\t%s\n", them);
	printf("mien :\t%s\n\n", mine);

	printf("memchr\nvrai :\t%s\n", (char *)memchr("ceciestuntest", 'i', 13));
	printf("mien :\t%s\n", (char *)ft_memchr("ceciestuntest", 'i', 13));
	printf("vrai :\t%s\n", (char *)memchr("ceciestuntest", 's', 13));
	printf("mien :\t%s\n", (char *)ft_memchr("ceciestuntest", 's', 13));
	printf("vrai :\t%s\n", (char *)memchr("ceciestuntest", 'a', 13));
	printf("mien :\t%s\n\n", (char *)ft_memchr("ceciestuntest", 'a', 13));

	printf("memcmp\nvrai :\t%d\n", memcmp("ceciestuntest", "ceciestuntest", 13));
	printf("mien :\t%d\n", ft_memcmp("ceciestuntest", "ceciestuntest", 13));
	printf("vrai :\t%d\n", memcmp("ceciestuntest", "ceci estuntest", 13));
	printf("mien :\t%d\n", ft_memcmp("ceciestuntest", "ceci estuntest", 13));
	printf("vrai :\t%d\n", memcmp("ceci estuntest", "ceciestuntest", 13));
	printf("mien :\t%d\n", ft_memcmp("ceci estuntest", "ceciestuntest", 13));
	printf("vrai :\t%d\n", memcmp("ceciestuntest", "ceciestuntest", 9));
	printf("mien :\t%d\n\n", ft_memcmp("ceciestuntest", "ceciestuntest", 9));
*/	
	//printf("strtok\nvrai :\t%s\n", strtok("les patates sont chaudes", " "));
//	printf("vrai:\t%s\n", strtok(NULL, " "));
//	printf("vrai:\t%s\n", strtok(NULL, " "));
//	fflush(stdout);
	printf("mien:\t%s\n", ft_strtok("   les  patates sont chaudes", " "));
	printf("mien:\t%s\n", ft_strtok(NULL, " "));
	printf("mien:\t%s\n", ft_strtok(NULL, " "));
	printf("mien:\t%s\n", ft_strtok(NULL, " "));
	printf("mien:\t%s\n", ft_strtok(NULL, " "));

/*
	printf("\nvrai :\t%\n", ());
	printf("mien :\t%\n", ());
	*/
	return (0);
}
