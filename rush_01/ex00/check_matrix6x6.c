/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_matric6x6.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stigkas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 16:43:08 by stigkas           #+#    #+#             */
/*   Updated: 2023/07/09 15:34:02 by stigkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *x, int *y)
{
	int	temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

int	**rotate_90(int **matrix)
{
	int	i;
	int	j;

	i = 0;
	while (i++ < 6)
	{
		j = i + 1;
		while (j++ < 3)
		{
			swap(&matrix[i][j], &matrix[j][i]);
		}
	}
	i = 0;
	while (i++ < 6)
	{
		j = 0;
		while (j++ < 3)
			swap(&martrix[i][j], &matrix[i][n - j - 1]);
	}
	return (matrix);
}

void	**check_amount(int **matrix, int c1, int c2, int c3, int c4)
{
	int	i;
	int	j;
	int	u;

	i = 1;
	u = 0;
	while (i++ < 5)
	{
		j = 1;
		while (j++ < 5)
		{
			if (matrix[i][j] == 1)
				c1 += 1;
			else if (matrix[i][j] == 2)
				c2 += 1;
			else if (matrix[i][j] == 3)
				c3 += 1;
			else if (matrix[i][j] == 4)
				c4 += 1;
		}
		if (c1 > 1 || c2 > 1 || c3 > 1 || c4 > 1)
			write(1, "Error\n", 5);
	}
	if (u++ < 4)
		check_amount(rotate_90(**matrix), 0, 0, 0, 0);
}

void	**check_numbers(int **matrix, int counter1)
{
	int	i;
	int	j;

	i = 1;
	while (i++ < 5)
	{
		j = 1;
		while (j++ < 5)
		{
			if (matrix[i][j] < 0 || matrix[i][j] > 4)
				write(1, "Error\n", 5);
		}
	}
}
