/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stigkas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 13:27:45 by stigkas           #+#    #+#             */
/*   Updated: 2023/07/11 17:30:44 by stigkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (*(dest + i) != '\0')
		i++;
	j = 0;
	while (*(src + j) != '\0')
	{
		*(dest + i + j) = *(src + j);
		j++;
	}
	*(dest + i + j) = '\0';
	return (dest);
}

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (*(s + i) != '\0')
		i++;
	return (i);
}

int	ft_lngth(int size, char **strs, char *sep)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	while (i < size)
	{
		l += ft_strlen(strs[i]);
		i++;
	}
	l += (size - 1) * ft_strlen(sep) + 1;
	return (l);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str;

	i = 0;
	if (size == 0)
	{
		str = 0;
		return (str);
	}
	str = (char *)malloc(sizeof(char) * ft_lngth(size, strs, sep));
	if (str == 0)
		return (0);
	*str = 0;
	i = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}
/*
int main()
{
	char *sep;
	char *strs[] = {"Simos", "the","Photographer"};
	char *ssttrr;

	sep = "{@}";
	ssttrr = ft_strjoin(3, strs, sep);
	printf("%s", ssttrr);
	free(ssttrr);
	return (0);
}*/
