/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pos.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfierlaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 16:27:24 by mfierlaf          #+#    #+#             */
/*   Updated: 2019/08/19 16:42:58 by mfierlaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "./libft/libft.h"
#include "./get_next_line/get_next_line.h"

char	**pos(int argc, char **argv)
{
	int		fd;
	int		ret;
	int		i;
	int		j;
	char	*line;
	char 	**tab;

	tab = ft_memalloc(0);
	line = NULL;
	i = 0;
	j = 0;
	fd = open(argv[1], O_RDONLY);
	while ((ret = get_next_line(fd, &line)) >= 0)
	{
		ft_strjoin(tab[i], line[i]);
		while (line[j] != '\0')
		{
			tab[i][j] = line [j];
			j++;
		}
		tab[i][j] = '\0';
		i++;
		j = 0;
		free(line);
		line = NULL;
		if (ret == 0)
			return (tab);
	}
	ft_print_table(tab);
	return (tab);
}
