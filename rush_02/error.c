/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjorma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 14:12:06 by vjorma            #+#    #+#             */
/*   Updated: 2023/07/15 11:23:15 by vjorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	v_putstr(char *str);

int	error(int code)
{
	char	*error_msg;

	if (code == 2)
		error_msg = "Error\n";
	if (code == 3)
		error_msg = "Dict Error\n";
	v_putstr(error_msg);
	return (code);
}
