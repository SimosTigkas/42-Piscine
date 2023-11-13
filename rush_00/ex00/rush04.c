/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stigkas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 12:12:34 by stigkas           #+#    #+#             */
/*   Updated: 2023/07/01 17:51:18 by stigkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);
int		ft_is_center(int col, int row, int x, int y);
int		ft_is_corner(int col, int row, int x, int y);
char	ft_get_corner(int *pcorner);

void	rush(int x, int y)
{
	int		col;
	int		row;
	int		corner;
	int		*pcorner;

	col = 0;
	row = 0;
	pcorner = &corner;
	while (col < x && row < y)
	{
		if (ft_is_center(col, row, x, y) == 1)
			ft_putchar(' ');
		else if (ft_is_corner(col, row, x, y) == 1)
			ft_putchar(ft_get_corner(pcorner));
		else
			ft_putchar('B');
		col++;
		if (col >= x)
		{
			ft_putchar('\n');
			row++;
			col = 0;
		}
	}
}

int	ft_is_center(int col, int row, int x, int y)
{
	return ((col > 0 && col < x - 1) && (row > 0 && row < y - 1));
}

int	ft_is_corner(int col, int row, int x, int y)
{
	return ((col == 0 || col == x - 1) && (row == 0 || row == y - 1));
}

char	ft_get_corner(int *pcorner)
{
	char	characters[4];
	char	value;

	characters[0] = 'A';
	characters[1] = 'C';
	characters[2] = 'C';
	characters[3] = 'A';
	value = characters[*pcorner];
	++(*pcorner);
	return (value);
}
