#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef MAX_FD
#  define MAX_FD 42
# endif

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <unistd.h>
# include <stdlib.h>

char	*get_next_line(int fd);
char	*read_file(int fd);
int	find_current_line(const char *str);
size_t	ft_strlen(const char *str);
char	*strjoin(char *s1, char *s2);
char	*return_current_line(char *bytes_read);
char	*return_after_sep(char *bytes_read);

#endif
