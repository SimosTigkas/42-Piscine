/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stigkas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:35:34 by stigkas           #+#    #+#             */
/*   Updated: 2023/07/10 11:26:59 by stigkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb;
	if (nb >= 1)
	{
		while (nb > 1)
		{
			i = i * (nb - 1);
			nb--;
		}
		return (i);
	}
	else if (nb == 0)
	{	
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
int main(void)
{
	printf("%d", ft_iterative_factorial(5));
	return (0);
}*/
