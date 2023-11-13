/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stigkas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 20:37:22 by stigkas           #+#    #+#             */
/*   Updated: 2023/06/28 20:57:53 by stigkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnumber(char u)
{
	write(1, &u, 1);
}

void	ft_print_numbers(void)
{
	char	t;

	t = '0';
	while (t <= '9')
	{
		ft_putnumber(t);
		t++;
	}
}
