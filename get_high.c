/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_high.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfierlaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 14:23:45 by mfierlaf          #+#    #+#             */
/*   Updated: 2019/08/20 14:44:34 by mfierlaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		get_high(t_file file, int x, int y)
{
	int cpt;
	int i;
	int ret;

	i = 0;
	cpt = 0;
	ret = 0;
	while (file->high[i] != '\0')
	{
		if ((isdigit(file->high[i]) == 1) && file->high[i + 1] == " ")
			cpt++;
		if (cpt == (x + (y * file->y)))
		{
			ret = ft_atoi(file->high[i]);
			break;
		}
		i++;
	}
	return (ret);
}
