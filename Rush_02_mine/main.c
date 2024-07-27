/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 11:31:44 by jyriarte          #+#    #+#             */
/*   Updated: 2024/07/27 17:48:34 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	main(int argc, char **argv)
{
	long long	n;
	t_dict		*list;
	t_dict	*temp;
    list = (t_dict *)malloc(sizeof(t_dict));
	if (argc < 2 || argc > 3)
	{
		ft_putstr("Error\n");
		return (1);
	}
	n = ft_atoi(argv[1]);
	if (n < 0)
	{
		ft_putstr("Error\n");
		return (1);
	}
	temp = list;
	parse_dictionary("numbers.dict", list);
	while (temp->next != NULL)
	{
		printf("%s: %s\n", temp->number, temp->word);
		temp = temp->next;
	}
	return (0);
}
