/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjorma <vjorma@gmail.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 09:56:23 by vjorma            #+#    #+#             */
/*   Updated: 2023/07/15 15:19:57 by stigkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		error(int code);
int		validate_num(char *num_str);
int		validate_dict(char *dict_file);

int	main(int argc, char *argv[])
{
	char	*num_to_convert;
	char	*dict_file;

	if (argc == 0 || argc > 2)
		return (error(1));
	if (argc == 2)
		num_to_convert = argv[1];
	if (argc == 3)
	{
		num_to_convert = argv[2];
		dict_file = argv[1];
		if (validate_dict(dict_file) != 1)
			return (error(3));
	}
	if (validate_num(num_to_convert) != 1)
	{
		return (error(2));
	}
	return (0);
}
