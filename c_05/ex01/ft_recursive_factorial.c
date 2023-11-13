/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stigkas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:05:56 by stigkas           #+#    #+#             */
/*   Updated: 2023/07/10 11:28:46 by stigkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb >= 1)
		return (nb * (ft_recursive_factorial(nb - 1)));
	else if (nb == 0)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	printf("%d", ft_recursive_factorial(-5));
	return (0);
}*/
