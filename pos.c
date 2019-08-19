/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pos.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfierlaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 16:27:24 by mfierlaf          #+#    #+#             */
/*   Updated: 2019/08/19 18:01:56 by mfierlaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "./libft/libft.h"
#include "./get_next_line/get_next_line.h"

int		*size(int argc, char **argv)
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
	fd = open(argv[1], O_RDONLY);
	while ((ret = get_next_line(fd, &line)) >= 0)
	{
		while (line[j] != '\0')
		
			if ((isdigit(line[j]) == 1) && line[j + 1] == " ")
				cpt++;
			j++;
		}
		i++;
	}
	size[0] = -1;
	return (size);
}

char	**pos
