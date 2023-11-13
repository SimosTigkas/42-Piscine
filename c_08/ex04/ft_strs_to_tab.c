/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stigkas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 14:34:26 by stigkas           #+#    #+#             */
/*   Updated: 2023/07/12 17:30:23 by stigkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
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

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*t;

	t = malloc(sizeof(t_stock_str) * (ac + 1));
	if (t == 0)
		return (0);
	i = 0;
	while (i < ac)
	{
		t[i].str = av[i];
		t[i].size = ft_strlen(av[i]);
		t[i].copy = ft_strdup(av[i]);
		i++;
	}
	t[i].str = 0;
	return (t);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av);
//void ft_show_tab(struct s_stock_str *par);
int main(void)
{
	char				*strs[4];
	char				*str1;
	char				*str2;
	char				*str3;
	char				*str4;
	int					size;
	int					i;
	struct s_stock_str *par;

	str1 = "Hello";
	str2 = "my";
	str3 = "name is";
	str4 = "Simos!";
	size = 4;
	strs[0] = str1;
	strs[1] = str2;
	strs[2] = str3;
	strs[3] = str4;
	par = ft_strs_to_tab(size, strs);
	i = 0;
	while (i < size)
	{
		printf("%d\n", par[i].size);
		printf("%s\n", par[i].str);
		printf("%s\n", par[i].copy);
		i++;
	}
	return (0);
}
