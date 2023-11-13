/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stigkas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 20:40:04 by stigkas           #+#    #+#             */
/*   Updated: 2023/07/10 16:10:45 by stigkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	unsigned int	i;

	i = 1;
	if (nb < 0)
		return (0);
	while (i * i <= (unsigned int) nb)
	{
		if (i * i == (unsigned int) nb)
			return (i);
		i++;
	}
	return (0);
}

int	main(void)
{
	printf("%d", ft_sqrt(2147483647));
	return (0);
}
