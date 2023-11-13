/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_base6x6.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stigkas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 17:12:09 by stigkas           #+#    #+#             */
/*   Updated: 2023/07/08 17:19:08 by stigkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	**fill_matrix_0(int **matrix)
{
	int	i;
	int	j;

	j = 0;
	while (j < 6)
	{
		i = 0;
		while (i < 6)
		{
			matrix[i][j] = 0;
			i++;
		}
		j++;
	}
	return (matrix);
}

int	**fill_matrix_firstandlastlines(int **matrix, int *outside)
{
	matrix[0][1] = outside[0];
	matrix[0][2] = outside[1];
	matrix[0][3] = outside[2];
	matrix[0][4] = outside[3];
	matrix[5][1] = outside[4];
	matrix[5][2] = outside[5];
	matrix[5][3] = outside[6];
	matrix[5][4] = outside[7];
	matrix[1][0] = outside[8];
	matrix[2][0] = outside[9];
	matrix[3][0] = outside[10];
	matrix[4][0] = outside[11];
	matrix[1][5] = outside[12];
	matrix[2][5] = outside[13];
	matrix[3][5] = outside[14];
	matrix[4][5] = outside[15];
	return (matrix);
}
