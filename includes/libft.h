/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 16:15:18 by mescande          #+#    #+#             */
/*   Updated: 2019/04/09 20:42:03 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# define SIGN(Value)	(Value < 0 ? -1 : 1)

# include <string.h>

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

int				ft_atoi(const char *str);
void			ft_bzero(void *s, size_t n);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
void			*ft_memccpy(void *restrict dst, const void *restrict src,
		int c, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memcpy(void *restrict dst, const void *restrict src,
		size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memset(void *b, int c, size_t len);
char			*ft_strcat(char *restrict s1, const char *restrict s2);
char			*ft_strchr(const char *s, int c);
int				ft_strcmp(const char *s1, const char *s2);
char			*ft_strcpy(char *dst, const char *src);
char			*ft_strdup(const char *s1);
size_t			ft_strlcat(char *restrict dst, const char *restrict src,
		size_t size);
size_t			ft_strlen(const char *s);
char			*ft_strncat(char *restrict s1, const char *restrict s2,
		size_t n);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strncpy(char *dst, const char *src, size_t len);
char			*ft_strnstr(const char *haystack, const char *needle,
		size_t len);
char			*ft_strrchr(const char *s, int c);
char			*ft_strstr(const char *haystack, const char *needle);
int				ft_tolower(int c);
int				ft_toupper(int c);

void			*ft_memalloc(size_t size);
void			ft_memdel(void **ap);
char			*ft_strnew(size_t size);
void			ft_strdel(char **as);
void			ft_strclr(char *s);
void			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
char			*ft_strmap(const char *s, char (*f)(char));
char			*ft_strmapi(const char *s, char (*f)(unsigned int, char));
int				ft_strequ(const char *s1, const char *s2);
int				ft_strnequ(const char *s1, const char *s2, size_t n);
char			*ft_strsub(const char *s, unsigned int start, size_t len);
char			*ft_strjoin(const char *s1, const char *s2);
char			*ft_strtrim(const char *s);
char			**ft_strsplit(const char *s, char c);
char			*ft_itoa(int n);
void			ft_putchar(char c);
void			ft_putstr(const char *s);
void			ft_putendl(const char *s);
void			ft_putnbr(int n);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(const char *s, int fd);
void			ft_putendl_fd(const char *s, int fd);
void			ft_putnbr_fd(int n, int fd);

char			*ft_strtok(char *restrict str, const char *restrict sep);

t_list			*ft_sltnew(void const *content, size_t content_size);
void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void			ft_lstadd(t_list **alst, t_list *new);
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

#endif
