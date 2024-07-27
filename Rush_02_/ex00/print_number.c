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

void	print_number(char *number, t_dict *dict, int space)
{
	int	len;
	char	*half;
	int	s;

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
		print_number(&number[1], dict, space);
	}
	else
	{
		print_more(number, dict);
	}	
}

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
void	print_more(char *number, t_dict *dict)
{
	char	*half;
	int	len;
	int	cut;

	len = ft_str_len(number);
	half = ft_strdup(number);
	cut = len % 3;
	if (cut == 0)
	{
		half[3] = '\0';
		print_number(half, dict, 1);
		get_number(tens(len - 2), dict, 1);
		print_number(&number[3], dict, 0);
	}
	else if (cut == 2)
	{
		half[2] = '\0';
		print_number(half, dict, 1);
		get_number(tens(len - 1), dict, 1);
		print_number(&number[2], dict, 0);
	}
	else
	{
		half[1] = '\0';
		print_number(half, dict, 1);
		get_number(tens(len), dict, 1);
		print_number(&number[1], dict, 0);
	}
}




















