/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stigkas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 12:21:16 by stigkas           #+#    #+#             */
/*   Updated: 2023/07/11 13:57:15 by stigkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*p;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	else
	{
		p = (int *)malloc(sizeof(int) * (max - min));
		if (p == 0)
			return (-1);
		while (i < max - min)
		{
			*(p + i) = min + i;
			i++;
		}
		*range = p;
	}
	return (max - min);
}
/*
int main()
{
	int *range;
	int j;
	int k;
	int l;

	k = 2;
	l = 10;
	j = 0;
	printf("%d\n", ft_ultimate_range(&range, k, l));
	while (j < (l - k))
	{
		printf("%d\n", range[j]);
		j++;
	}
	free(range);
	return (0);
}*/
