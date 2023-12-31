#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 3
# endif

# include <stdlib.h>

char	*get_next_line(int fd);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *buffer);
char	*ft_strjoin(char const *stack, char const *buffer);
char	*ft_substr(char const *stack, unsigned int start, size_t len);
void	*ft_free_stack(char **stack, int create_line);

#endif