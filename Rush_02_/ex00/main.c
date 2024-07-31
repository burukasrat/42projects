/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 11:31:44 by jyriarte          #+#    #+#             */
/*   Updated: 2024/07/28 09:55:09 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	main(int argc, char **argv)
{
	char		*input;
	t_dict		*list;

	list = (t_dict *)malloc(sizeof(t_dict));
	if (argc < 2 || argc > 3)
	{
		ft_putstr("Error\n");
		return (1);
	}
	input = ft_validate_input(argv[1]);
	parse_dictionary("numbers.dict", list);
	print_more(input, list, 0);
	return (0);
}