/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 10:48:57 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/15 12:06:53 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print(int n);

void	ft_print_comb2(void)
{
	int	first;
	int	second;

	first = 0;
	while (first < 99)
	{
		second = first + 1;
		while (second < 100)
		{
			print(first);
			write(1, " ", 1);
			print(second);
			if (first != 98)
				write(1, ", ", 2);
			second++;
		}
		first++;
	}
}

void	print(int n)
{
	int	a;

	a = n / 10;
	a += 48;
	write(1, &a, 1);
	a = n % 10;
	a += 48;
	write(1, &a, 1);
}
