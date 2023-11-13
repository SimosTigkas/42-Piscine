/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fget.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stigkas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 15:33:21 by stigkas           #+#    #+#             */
/*   Updated: 2023/07/15 16:46:07 by stigkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char ft_fgets(char file, int length)
{
	line = ""
	while len(line) < length:
    	char1 = file.read(1)
    	if (char1 == '\0')
        	break ;
    	line += char1
    	if char1 == "\n":
        	break ;
	if line and not line.endswith("\n"):
    	line += "\n"  # Include newline character if missing

int main()
{

    FILE *file = open("numbers.dict", "r");
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return (1);
    }
    char line[100];
    if (ft_fgets(line, sizeof(line), file) != NULL) {
        printf("Read line: %s", line);
    } else {
        printf("End of file reached.\n");
    }
    close(file);
    return (0);
}
