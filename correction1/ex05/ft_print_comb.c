/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 18:38:38 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/14 16:51:58 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	cont(int c, int d, int e);

void	ft_print_comb(void)
{
	int	c;
	int	d;
	int	e;

	c = 48;
	while (c < 56)
	{
		d = c + 1;
		while (d < 57)
		{
			e = d + 1;
			while (e < 58)
			{
				cont(c, d, e);
				e = e + 1;
			}
			d = d + 1;
		}
		c = c + 1;
	}
}

void	cont(int c, int d, int e)
{
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &e, 1);
	if (c != 55)
		write(1, ", ", 2);
}
