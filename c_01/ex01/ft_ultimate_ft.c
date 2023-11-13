/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stigkas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 18:15:51 by stigkas           #+#    #+#             */
/*   Updated: 2023/07/20 13:01:53 by stigkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

void    ft_ultimate_ft(int *********);

int        main(void)
{
    int a;
    int *ptr1, **ptr2, ***ptr3, ****ptr4, *****ptr5, ******ptr6, *******ptr7, ********ptr8, *********ptr9;

    a = 21;
    ptr1 = &a;
    ptr2 = &ptr1;
    ptr3 = &ptr2;
    ptr4 = &ptr3;
    ptr5 = &ptr4;
    ptr6 = &ptr5;
    ptr7 = &ptr6;
    ptr8 = &ptr7;
    ptr9 = &ptr8;
    printf("Avant (21): %d\n", a);
    ft_ultimate_ft(ptr9);
    printf("Apres (42): %d\n", a);
}
