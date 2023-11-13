/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stigkas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 18:50:21 by stigkas           #+#    #+#             */
/*   Updated: 2023/07/11 11:59:58 by stigkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>
#include <string.h>

int	*ft_range(int min, int max)
{
	int	*dest;
	int	j;

	dest = (int *)malloc(sizeof(int) * (max - min));
	j = 0;
	if (min >= max)
		return (0);
	while (min < max)
	{
		*(dest + j) = min;
		j++;
		min++;
	}
	return (dest);
}
/*
int main()
{
	int i1;
	int i2;
	int *arr;
	int j;

	i1 = 2;
	j = 0;
	i2 = 10;
	arr = ft_range(i1, i2);
	while(j < i2 - i1)
	{
		printf("%d\n", arr[j]);
		j++;
	}
	free(arr);
	return (0);
}*/
