/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:53:19 by jshestov          #+#    #+#             */
/*   Updated: 2023/02/21 14:42:40 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 32
# endif

# ifndef T_LIST
#  define T_LIST

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
# endif

int			ft_atoi(const char *str);
void		ft_bzero(void *s, size_t n);
void		*ft_calloc(size_t count, size_t size);
int			ft_isalnum(int argument);
int			ft_isalpha(int argument);
int			ft_isascii(int argument);
int			ft_isdigit(int argument);
int			ft_isprint(int argument);
char		*ft_itoa(int n);
void		*ft_memchr(const void *ptr, int ch, size_t count);
int			ft_memcmp(const void *ptr1, const void *ptr2, size_t num);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t n);
void		*ft_memset(void *str, int c, size_t n);
void		ft_putchar_fd(char c, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
void		ft_putstr_fd(char *s, int fd);
char		**ft_split(char const *s, char c);
char		*ft_strchr(const char *s, int c);
char		*ft_strdup(const char *src);
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
char		*ft_strjoin(char const *s1, char const *s2);
size_t		ft_strlcat(char *dst, const char *src,
				size_t dstsize);
size_t		ft_strlcpy(char *dst, const char *src,
				size_t dstsize);
size_t		ft_strlen(const char *str);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
char		*ft_strrchr(const char *s, int c);
char		*ft_strtrim(char const *s1, char const *set);
char		*ft_substr(char const *s, unsigned int start, size_t len);
int			ft_tolower(int c);
int			ft_toupper(int c);
t_list		*ft_lstnew(void *content);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstadd_front(t_list **lst, t_list *new);
void		ft_lstdelone(t_list *lst, void (*del)(void*));
t_list		*ft_lstlast(t_list *lst);
int			ft_lstsize(t_list *lst);
void		ft_lstclear(t_list **lst, void (*del)(void*));
void		ft_lstiter(t_list *lst, void (*f)(void *));
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
int			ft_printf(const char *placeholders, ...);
int			ft_print_c(char c);
int			ft_print_s(char	*s);
int			ft_print_p(void *p);
int			ft_print_d(int num);
int			ft_print_i(int num);
int			ft_print_u(unsigned int unum);
int			ft_print_x(int num);
int			ft_print_upper_x(int nb);
int			ft_print_percentage(void);
int			ft_print_nbr(int nb);
void		ft_putchar_fd(char c, int fd);
void		ft_putnbr_fd(int nb, int fd);
size_t		ft_strlen(const char *str);
char		*get_next_line(int fd);
size_t		ft_strlen(const char *str);
char		*ft_strchr(const char *s, int c);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strdup(const char *src);
char		*ft_substr(char const *s, unsigned int start, size_t len);
int			ft_isspace(int c);
long long	ft_atoll(const char *nptr);
long int	ft_abs(long int num);
#endif
