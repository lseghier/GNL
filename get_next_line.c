/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseghier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 02:35:15 by lseghier          #+#    #+#             */
/*   Updated: 2023/07/03 04:43:56 by lseghier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	if (str)
	{
		while (str[i])
		{
			if (str[i] == (unsigned char) c)
				return (1);
			i++;
		}
	}
	return (0);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	int		i;
	int		j;
	int		len1;
	int		len2;

	i = 0;
	j = 0;
	len1 = len(s1);
	len2 = len(s2);
	str = (malloc (sizeof(char) * len1 + len2 + 1));
	if (!s1 || !s2 || !str)
		return (NULL);
	while (i < len1)
		str[i++] = s1[i++];
	while (j < len2)
		str[i++] = s2[j++];
	str[i] = '\0';
	return (free(s1), str);
}

char	*get_current_line(char	*stash)
{
	size_t	i;
	size_t	j;
	char	*line;

	i = 0;
	j = 0;
	if (!stash || !stash[0])
		return (NULL);
	while (stash[i] && stash[i] != '\n')
		i++;
	line = malloc((i + 2) * sizeof(char));
	while (j <= i)
		line[j++] = stash[j++];
	line[j] = 0;
	return (line);
}

char	*add_left_to_stash(char *stash)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*left;

	i = 0;
	while (stash[i] && stash[i] != '\n')
		i++;
	if (!stash[i])
		return (free(stash), NULL);
	left = malloc((len(stash) - i) * sizeof(char));
	if (!left)
		return (free(stash), left);
	j = i + 1;
	k = 0;
	while (stash[j])
		left[k++] = stash[j++];
	left[k] = '\0';
	return (free(stash), left);
}

char	*get_next_line(int fd)
{
}
