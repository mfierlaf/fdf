/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pos.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfierlaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 16:27:24 by mfierlaf          #+#    #+#             */
/*   Updated: 2019/08/20 16:17:15 by mfierlaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "./libft/libft.h"
#include "./get_next_line/get_next_line.h"

t_list		pos(int argc, char **argv)
{
	int		fd;
	int		ret;
	int		i;
	int		j;
	int		cpt;
	t_file	file;

	line = NULL;
	i = 0;
	j = 0;
	cpt = 0;
	if ((file = malloc(sizeof(t_file))) == NULL)
		return (NULL);
	fd = open(argv[1], O_RDONLY);
	while ((ret = get_next_line(fd, &line)) == 1)
	{
		while (line[j] != '\0')
		{
			if ((isdigit(line[j]) == 1) && line[j + 1] == " ")
				cpt++;
			j++;
		}
		file->high = ft_str_joinf_free(file->high, line, 3);
		file->high = ft_str_join_free(file->high, " ", 3);
		i++;
		file->x == cpt;
		cpt = 0;
		j = 0;
	}
	file->y == i;
	return (file);
}
