/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 18:38:22 by hmacedo-          #+#    #+#             */
/*   Updated: 2025/05/20 21:22:58 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static char	*joinall_lines(int fd)
{
	char	*s1;
	char	*s2;
	char	*result;
	
	s2 = get_next_line(fd);
	result = ft_strjoin("", s2);
	s1 = result;
	while (s2)
	{
		free(s2);
		s2 = get_next_line(fd);
		if (s2)
		{
			result = ft_strjoin(s1, s2);
			free(s1);
			s1 = result;
		}
	}
	free(s2);
	return (result);
}

char    **read_file_game(int fd)
{
	char	*join;
	char	**split;

	join = joinall_lines(fd);
	close(fd);
	if (!join)
	{
		ft_putstr_fd("Fail to read file", 2);
		return (NULL);
	}
	split = ft_split(join, '\n');
	if (!split || !split[0])
	{
		if (split)
			free(split);
		ft_putstr_fd("allcation error", 2);
		return (NULL);
	}
	return (split);
}
