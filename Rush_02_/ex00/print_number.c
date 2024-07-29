/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 19:30:07 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/28 09:53:41 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	get_number(char *number, t_dict *dict, int space)
{
	t_dict	*temp;

	temp = dict;
	while (temp->next != NULL)
	{
		if (ft_strcmp(temp->number, number) == 0)
		{
			ft_putstr(temp->word);
			if (space)
				write(1, " ", 1);
			return (1);
		}
		temp = temp->next;
	}
	return (0);
}

/*
void	print_number(char *number, t_dict *dict, int space)
{
	int	len;
	char	*half;

	half = ft_strdup(number);
	len = ft_str_len(number);
	if (get_number(number, dict, space))
		return ;
	else if (len < 3)
	{
		half[1] = '0';
		get_number(half, dict, 1);
		get_number(&number[1], dict, space);
	}
	else if (len < 4)
	{
		half[1] = '\0';
		get_number(half, dict, 1);
		half = "100";
		get_number(half, dict, 1);
	}
}
*/

char	*tens(int n)
{
	char	*num;
	int	i;

	num = (char *)malloc(n + 1);
	num[0] = '1';
	i = 1;
	while (i < n)
		num[i++] = '0';
	num[i] = '\0';
	return (num);
}

void	print_more(char *number, t_dict *dict, int space)
{
	char	*half;
	int	len;
	int	cut;

	len = ft_str_len(number);
	half = ft_strdup(number);
	if (get_number(number, dict, space))
		return ;
	cut = len % 3;
	if (cut == 0)
		cut = 3;
	half[cut] = '\0';
	print_more(half, dict, 1);
	get_number(tens(len - cut - 1), dict, 1);
	print_more(&number[cut], dict, 0);
}


















