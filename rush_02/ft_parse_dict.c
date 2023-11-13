/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_dict.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stigkas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 12:53:11 by stigkas           #+#    #+#             */
/*   Updated: 2023/07/16 19:42:52 by stigkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

char **ft_parse_dict(char *str)
{
	int 	c;
	int		i;
	char	**output;

	c = 0;
	output = (char**)(malloc(2*sizeof(char**) * 2048)); 
	while (c < 29)
	{
		i = 0;
		while (str[i] != ':')
		{
			output[c][i] = str[i];
			i++;
		}
		i++;
		while (str[i] != '\0')
		{
			output[c][i] = str[i];
			i++;
		}
		c++;
	}
	return (output);
}

int main (void)
{
	int		fd;
	char	**outp[29][30];
	char 	buff[2048];
	int 	r;
	int 	j;
	int 	k;

	j = 0;
	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)	
		return (0);
	else
		r = read(fd, buff, 2048);
	**outp = ft_parse_dict(buff);
	while (j < 29)
	{
		k = 0;
		while (k < 30)
		{
			printf("%c", **outp[j][k]);
			k++;
		}
		j++;
	}
	free(**outp);
	close(fd);
	return (0);
}

