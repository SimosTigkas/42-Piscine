/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stigkas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:52:34 by stigkas           #+#    #+#             */
/*   Updated: 2023/07/10 11:34:26 by stigkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power >= 1)
		return ((ft_recursive_power(nb, power - 1)) * nb);
	return (nb);
}
/*
int	main(void)
{
	printf("%d", ft_recursive_power(2, 4));
	return (0);
}*/
