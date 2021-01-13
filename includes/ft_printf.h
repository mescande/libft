/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 16:17:15 by mescande          #+#    #+#             */
/*   Updated: 2021/01/05 14:05:02 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define BUFFER_SIZE 400

# include <stdio.h>

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "libft.h"

/*
**flags[6] = {ZEROS, PLUSS, MOINS, DIESE, PRECI, VPREC, 0}
**conv :	c=99	s=115	p=112	d=100	i=105	u=117	x=120	X=88	%=37
**			n=110	f=102	g=103	e=101
*/

enum			e_flags
{
	ZEROS,
	PLUSS,
	MOINS,
	DIESE,
	PRECI,
	VPREC,
};

typedef struct s_plist
{
	char			*str;
	int				len;
	struct s_plist	*next;
}				t_plist;

int				ft_printf_atoi(const char *str);
char			*ft_strprintfjoin(const char *s1, char *s2);
char			*ft_utoa_base(unsigned long long value, int big);

char			*conv_c(int *flags, va_list args, t_plist **lst);
char			*conv_s(int *flags, va_list args, int k);
char			*conv_p(int *flags, va_list args);
char			*conv_d(int *flags, va_list args, char fil);

char			*fillme(int *flags, char fil, char *res);
char			*conv_u(int *flags, va_list args, char fil);
char			*conv_x(int *flags, va_list args, char fil);
char			*conv_bigx(int *flags, va_list args, char fil);
char			*conv_pourcent(int *flags);

char			*youdontwannadothis(char *tofree, char *ret);
int				isnum(char c);
int				precision_in_conv_s(int i, int *flags, char *var);
char			*precision_in_conv_d(char *res, int *flags, int len);
char			*ft_putitin(int *flags, char c, va_list args, t_plist **lst);

void			initflags(int *flags);
int				*verifflags(int *flags);
int				isflag(char c);
int				wichflag(int *flags);
int				printit(t_plist *start);

t_plist			*newelem(void);
t_plist			*addchar(t_plist *lst, char c);
t_plist			**addstr(t_plist **lst, char *str);
int				workonstr(const char *str, int i, va_list args, t_plist **lst);
int				ft_printf(const char *str, ...);

int				ft_fprintf(int fd, const char *str, ...);

#endif
