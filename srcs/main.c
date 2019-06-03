/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 16:12:07 by mescande          #+#    #+#             */
/*   Updated: 2019/06/03 14:47:09 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

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

	char str[] = "les patates sont chaudes";
	char spr[] = "les patates sont chaudes";
	printf("strtok\nvrai :\t%s\n", strtok(str, " "));
	printf("vrai:\t%s\n", strtok(NULL, " "));
	printf("vrai:\t%s\n", strtok(NULL, " "));
	printf("mien:\t%s\n", ft_strtok(spr, " "));
	printf("mien:\t%s\n", ft_strtok(NULL, " "));
	printf("mien:\t%s\n\n", ft_strtok(NULL, " "));

	char str[] = "0 0 0 0 0 0 0";
	char *spr = "split    ||this|for|me||||!|";
	char *s;
	printf("strsplit\n");
	fflush(stdout);
	char **split = ft_strsplit(str, ' ');
	s = (char *)malloc(ft_strlen(str) * sizeof(char));
	s = ft_strcpy(s, str);
	printf("%s\n", s);
	fflush(stdout);
	while (*split != NULL)
		printf("mien :\t%s\n", *(split++));
	fflush(stdout);
	split = ft_strsplit(spr, '|');
	printf("\n");
	while (*split != NULL)
		printf("mien :\t%s\n", *(split++));

	printf("islower\n");
	int i = -50;
	while(i++ < 500)
		if (ft_islower(i) != islower(i))
			printf("i : %d\tV :%d\tM :%d\n", i, islower(i), ft_islower(i));

	printf("strcmp\nvrai :\t%d\n", strcmp("wba", "abc"));
	printf("mien :\t%d\n\n", ft_strcmp("wba", "abc"));
	printf("strncmp\nvrai :\t%d\n", strncmp("abc", "abcde", 3));
	printf("mien :\t%d\n", ft_strncmp("abc", "abcde", 3));

	printf("itoa\nvrai :\t%s\n", "0");
	printf("mien :\t%s\n", ft_itoa(0));
	printf("vrai :\t%s\n", "-123");
	printf("mien :\t%s\n", ft_itoa(-123));
	printf("vrai :\t%s\n", "123");
	printf("mien :\t%s\n", ft_itoa(123));
	printf("vrai :\t%s\n", "-2147483648");
	printf("mien :\t%s\n", ft_itoa(-2147483648));
	printf("vrai :\t%s\n", "2147483647");
	printf("mien :\t%s\n", ft_itoa(2147483647));

	int i = -500000;
	while(i++ < 500000)
		if (ft_iscntrl(i) != iscntrl(i))
		{
			printf("%d\nvrai :\t%d\n", i, iscntrl(i));
			printf("mien :\t%d\n", ft_iscntrl(i));
		}

	printf("memcpy\nvrai :\t%d\n", (int)memcpy(NULL, NULL, 3));
	printf("mien :\t%d\n", (int)ft_memcpy(NULL, NULL, 3));
*/
/*
	printf("\nvrai :\t%\n", ());
	printf("mien :\t%\n", ());
	*/
	return (0);
}
