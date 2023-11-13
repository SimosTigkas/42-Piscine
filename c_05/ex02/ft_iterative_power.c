/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stigkas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:07:04 by stigkas           #+#    #+#             */
/*   Updated: 2023/07/10 11:31:00 by stigkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	p;

	i = 0;
	p = 1;
	if (power > 0)
	{
		while (i < power)
		{
			p = p * nb;
			i++;
		}
	}
	else if (power == 0)
		p = 1;
	else if (power < 0)
		p = 0;
	return (p);
}
/*
int	main(void)
{
	printf("%d", ft_iterative_power(2, 4));
	return (0);
}*/
