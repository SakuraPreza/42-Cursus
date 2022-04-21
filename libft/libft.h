/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btolga <btolga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 23:45:23 by btolga            #+#    #+#             */
/*   Updated: 2022/04/01 13:30:30 by btolga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

//Mandatory Part:
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *str, int character, size_t n);
void	ft_bzero(void *str, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strlcpy(char *dest, const char *src, size_t n);
size_t	ft_strlcat(char *dest, const char *src, size_t n);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *str, int find);
char	*ft_strrchr(const char *str, int find);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *str, int find, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *str, const char *find, size_t n);
int		ft_atoi(const char *str);
void	*ft_calloc(size_t size, size_t byte);
char	*ft_strdup(const char *str);
char	*ft_substr(const char	*str, unsigned int start, size_t n);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strtrim(const char	*str, const char *find);
char	**ft_split(const char *str, char delimiter);
char	*ft_itoa(int n);
char	*ft_strmapi(const char *str, char (*ft_func)(unsigned int, char));
void	ft_striteri(char *str, void (*ft_func)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *str, int fd);
void	ft_putendl_fd(char *str, int fd);
void	ft_putnbr_fd(int n, int fd);

//Create Struck List:
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

//Bonus Part:
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **firstList, t_list *newItem);
int		ft_lstsize(t_list *list);
t_list	*ft_lstlast(t_list *firstList);
void	ft_lstadd_back(t_list **firstList, t_list *newItem);
void	ft_lstdelone(t_list *listItem, void (*ft_deleteFunc)(void *));
void	ft_lstclear(t_list **listItem, void (*ft_deleteFunc)(void *));
void	ft_lstiter(t_list *listItem, void (*ft_nextItemFunc)(void *));
t_list	*ft_lstmap(t_list *list, void *(*ft_f)(void *), void (*ft_del)(void *));

#endif