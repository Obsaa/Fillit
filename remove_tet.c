/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_tet.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakin-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 01:59:36 by aakin-al          #+#    #+#             */
/*   Updated: 2017/04/06 01:59:39 by aakin-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	get_char(char *tetrimino)
{
	while (*tetrimino)
	{
		if (ft_isalpha(*tetrimino) == 1)
			return (*tetrimino);
		tetrimino++;
	}
	return ('\0');
}

void	remove_tetrimino(char **m, char *tetrimino)
{
	char	c;
	char	*map;

	c = get_char(tetrimino);
	map = *m;
	while (*map)
	{
		if (*map == c)
			*map = '.';
		map++;
	}
}
