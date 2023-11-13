/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stigkas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 20:29:17 by stigkas           #+#    #+#             */
/*   Updated: 2023/07/20 13:14:04 by stigkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int main(void)
{
	int *atr;
	int *btr;
	int c;
	int d;

	c = 5;
	d = 7;
	atr = &c;
	btr = &d;
	printf("%d%d", *atr, *btr);
	ft_swap(atr, btr);
	printf("%d%d", *atr, *btr);
	return (0);
}
