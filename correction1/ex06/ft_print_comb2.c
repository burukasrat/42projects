/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 10:48:57 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/14 17:03:49 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print(int first, int second, int third, int fourth);

void	ft_print_comb2(void)
{
	int	first;
	int	second;
	int	third;
	int	fourth;

	first = 48;
	while (first < 58)
	{
		second = 48;
		while (second < 58)
		{
			third = first;
			while (third < 58)
			{
				fourth = second + 1;
				print(first, second, third, fourth);
				third += 1;
			}
			second += 1;
		}
		first += 1;
	}
}

void	print(int first, int second, int third, int fourth)
{
	while (fourth < 58)
	{
		write(1, &first, 1);
		write(1, &second, 1);
		write(1, " ", 1);
		write(1, &third, 1);
		write(1, &fourth, 1);
		if (first + second + third + fourth != 227)
			write(1, ", ", 2);
		fourth += 1;
	}
}
