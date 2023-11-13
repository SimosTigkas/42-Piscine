/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stigkas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 19:27:41 by stigkas           #+#    #+#             */
/*   Updated: 2023/07/12 13:39:56 by stigkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>
# define SUCCESS	0

# define FALSE	0
# define TRUE	1

# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"

typedef enum a_bool
{	
	true = 1,
	false = 0
}	t_bool;

# define EVEN(n) (n % 2) == 0

#endif
