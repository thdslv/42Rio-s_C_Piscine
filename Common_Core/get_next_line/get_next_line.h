/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 15:21:52 by thda-sil          #+#    #+#             */
/*   Updated: 2024/01/12 16:35:58 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>

char	*get_next_line(int fd);
size_t	ft_strlen(const char *str);
int	find_current_line(char *str);
char	*return_current_line(char *result);
char	*return_after_separator(char *result);
char	*ft_strjoin(char *s1, char *s2);
#endif
