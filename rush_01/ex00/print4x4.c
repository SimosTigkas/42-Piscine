/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print4x4.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stigkas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 16:44:29 by stigkas           #+#    #+#             */
/*   Updated: 2023/07/08 17:54:55 by stigkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print4x4(int matrix[4][4])
{
	int		i;
	int		j;
	char	answer;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			answer = matrix[i][j] + '0';
			write(1, &answer, 1);
			write(1, " ", 1);
			j++;
		}
		answer = matrix[i][j] + '0';
		write(1, &answer, 1);
		write(1, "\n", 1);
		i++;
	}
}
