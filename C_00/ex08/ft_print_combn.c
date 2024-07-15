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
	int	d;
	int	count;
	int	e;
	
	if (n == 0)
		return ;
	c = 48;
	while (c < 58)
	{
		write(1, &c, 1);
		ft_print_combn(n - 1);
		if (n == 1)
			write(1, ", ", 2);
		c++;
	}
}
