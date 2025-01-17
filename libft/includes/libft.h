/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:28:21 by gbazart           #+#    #+#             */
/*   Updated: 2024/07/22 18:16:37 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <assert.h>
# include <fcntl.h>
# include <limits.h>
# include <stdarg.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif
# if BUFFER_SIZE <= 0
#  define BUFFER_SIZE 0
# endif
# if BUFFER_SIZE > 2147483647
#  define BUFFER_SIZE 0
# endif

# ifndef MAX_FD
#  define MAX_FD 4096
# endif

// list chainee
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

// libft
int					ft_toupper(int c);
int					ft_tolower(int c);
char				**ft_split(const char *str, char charset);

int					count_words(const char *str, char c);
void				*clean(char **dest, int stop);
char				*str_copy(int i, int len, const char *str);
int					ft_next_sep(int i, const char *str, char charset);

// mem
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memset(void *s, int c, size_t n);

// is
int					ft_isdigit(int c);
int					ft_isalpha(int c);
void				ft_bzero(void *s, size_t n);
void				*ft_calloc(size_t nmemb, size_t size);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_isspace(char c);
int					ft_isnumeric(char *str);

// str
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
size_t				ft_strlen(const char *s);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strnstr(const char *big, const char *little,
						size_t len);
char				*ft_strchr(const char *s, int c);
char				*ft_strdup(const char *s);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
size_t				ft_strlcpy(char *dst, const char *src, size_t size);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strrchr(const char *s, int c);

// to
double				ft_atodbl(const char *str);
int					ft_atoi(const char *nptr);
char				*ft_itoa(int n);
long				ft_atol(const char *str);

// lst
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstadd_front(t_list **lst, t_list *new);
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstlast(t_list *lst);
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));
t_list				*ft_lstnew(void *content);
int					ft_lstsize(t_list *lst);

// printf
int					ft_putptr(void *ptr);
int					ft_putu(unsigned int num);
int					ft_puthex(unsigned int num, const char c);
int					ft_printf(const char *string, ...);
int					ft_putchar(char c);
int					ft_putnbr(int n);
int					ft_putstr(char *s);

// fprintf
int					ft_putptr_fd(void *ptr, int fd);
int					ft_putu_fd(unsigned int num, int fd);
int					ft_puthex_fd(unsigned int num, const char c, int fd);
int					ft_fprintf(int fd, const char *string, ...);
ssize_t				ft_putchar_fd(char c, int fd);
ssize_t				ft_putnbr_fd(int n, int fd);
ssize_t				ft_putstr_fd(char *s, int fd);
ssize_t				ft_putendl_fd(char *s, int fd);

// get_next_line
char				*get_next_line(int fd);

#endif
