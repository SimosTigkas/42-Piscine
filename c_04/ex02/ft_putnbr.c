/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stigkas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 18:08:26 by stigkas           #+#    #+#             */
/*   Updated: 2023/07/06 13:20:45 by stigkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <limits.h>
#include <unistd.h>
//#include <string.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb == -2147483648)
	{
		ft_putnbr(2);
		nb = 147483648;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10)
	{
		ft_putchar(nb + 48);
	}
}

int	main(void)
{
	/*ft_putnbr(-2147483648);
	return (0);*/
    printf("%d", INT_MAX);
}
