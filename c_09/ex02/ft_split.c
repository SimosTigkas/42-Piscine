/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stigkas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:27:42 by stigkas           #+#    #+#             */
/*   Updated: 2023/07/19 17:28:48 by stigkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		parse_c(char c, char *arr);
int		element_count(char *str, char *arr);
char	*str_n_dup(int n, char *str);
int		ft_length(char *str, char *arr);
char	**ft_split(char *str, char *charset);

char	*str_n_dup(int n, char *str)
{
	char	*dest;
	int		i;

	i = 0;
	dest = malloc((n + 1) * sizeof(char));
	if (dest == 0)
	{
		return (dest);
	}
	while ((str[i] != '\0') && (i < n))
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	parse_c(char c, char *arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		if (arr[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	element_count(char *str, char *arr)
{
	int	i;

	i = 0;
	while ((str[i] != '\0') && (parse_c(str[i], arr) == 0))
	{
		i++;
	}
	return (i);
}

int	ft_length(char *str, char *arr)
{
	int	length;
	int	n;
	int	i;

	i = 0;
	n = 0;
	length = 0;
	while (str[i] != '\0')
	{
		while (parse_c(str[i], arr) != 0)
		{
			i++;
		}
		n = element_count(str + i, arr);
		if (n > 0)
		{
			length++;
		}
		i = i + n;
	}
	return (length);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		n;
	int		i;
	int		j;

	i = 0;
	j = 0;
	arr = malloc(sizeof(char *) * (ft_length(str, charset) + 1));
	if (arr == 0)
	{
		return (0);
	}
	while (str[j] != '\0')
	{
		while (parse_c(str[j], charset))
			j++;
		n = element_count(str + j, charset);
		if (n > 0)
			arr[i++] = str_n_dup(n, str + j);
		j = j + n;
	}
	arr[i] = 0;
	return (arr);
}
/*
#include <stdio.h>
#include <string.h>
void	ft_printarr(char **arr)
{
	int i;
	i = 0;
	if (arr == 0)
		printf("0\n");
	else
	{
	while (arr[i] != 0)
	{
		printf("%d %s\n", i, arr[i]);
		i++;
	}
	printf("%d - 0", i);
    }
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		ft_printarr(ft_split(argv[1], argv[2]));
	return (0);
 }
 
 
 
 char    **ft_split(char const *s, char c)
 {
     size_t    j;
     size_t    i;
     size_t    counter;
     char    **res;
     size_t    start;

     j = 0;
     i = 0;
     counter = 1;
     while (s[i] != '\0')
     {
         if (s[i] == c)
             counter++;
     }
     res = (char **)malloc((counter + 1) * sizeof(char));
     if (!res)
         return (NULL);
     i = 0;
     while (s[i] != '\0')
     {
         start = i;
         while (s[i] && s[i] != c)
             i++;
         res[j] = (char *)malloc(i - start + 1);
         if (!res[j])
             return (NULL);
         ft_strlcpy(res[j], s + start, i - start);
         res[j++][i - start] = '\0';
         if (s[i])
             i++;
     }
     res[j] = NULL;
     return (res);
 }
*/
