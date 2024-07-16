/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:18:44 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/14 17:15:54 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_combn(int n);

int	main(void)
{
	ft_print_combn(2);
	return (0);
}

void	ft_print_combn(int n)
{
	int	c;
	int	max;
	int	count;
	int	e;
	
	max = 1;
	while (n)
	{
		max *= 10;
		n--;
	}
	
	c = 0;
	while (c < max)
	{
		if (check(c))
			ft_putnbr(c)
		if (n == 1)
			write(1, ", ", 2);
		c++;
	}
}
