/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 19:30:07 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/27 19:45:30 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	get_number(char *number, t_dict *dict)
{
	t_dict	*temp;

	temp = dict;
	while (temp->next != NULL)
	{
		if (ft_strcmp(temp->number, number) == 0)
		{
			ft_putstr(temp->word);
			return ;
		}
		temp = temp->next;
	}
}		
