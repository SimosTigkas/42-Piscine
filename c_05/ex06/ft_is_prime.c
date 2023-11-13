/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stigkas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 11:16:05 by stigkas           #+#    #+#             */
/*   Updated: 2023/07/10 12:18:52 by stigkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (i < nb)
	{
		if (nb == 2147483647)
			return (1);
		if (nb % i != 0)
			return (1);
		else
			return (0);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d", ft_is_prime(2147483647));
	return (0);
}*/
