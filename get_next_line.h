/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseghier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 03:41:10 by lseghier          #+#    #+#             */
/*   Updated: 2023/07/06 04:06:12 by lseghier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stddef.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>

int	ft_strchr(const char *str, int c);
char	*ft_strjoin(char *s1, char *s2);
char	*get_current_line(char *stash);
char	*add_left_to_stash(char	*stash);
char	*get_next_line(int fd);
size_t	ft_len(char *str);

#endif
