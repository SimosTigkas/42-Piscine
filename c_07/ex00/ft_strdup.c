/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stigkas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 15:56:43 by stigkas           #+#    #+#             */
/*   Updated: 2023/07/11 12:12:10 by stigkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (*(s + i) != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	dest = (char *)(malloc(ft_strlen(src) + 1));
	if (dest == 0)
		return (0);
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
/*
int	main(int ac, char **av)
{
	char	*s1;
	char	*s2;

	s1 = ft_strdup(av[1]);
	s2 = strdup(av[1]);
	if (ac == 2)
	{
		printf("%s\n%s\n", s1, s2);
	}
	free(s1);
	free(s2);
	return (0);
}*/
