/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 14:04:08 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/30 16:20:07 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	print(int nb, int sign);

void	ft_putnbr(int nb);

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	while ((par->str)[0] != 0)
	{
		ft_putstr(par->str);
		ft_putstr("\n");
		ft_putnbr(par->size);
		ft_putstr("\n");
		ft_putstr(par->copy);
		ft_putstr("\n");
		par++;
	}
}

void	ft_putnbr(int nb)
{
	int	sign;

	sign = 0;
	if (nb == -2147483648)
	{
		ft_putnbr(-214748364);
		nb = 8;
	}
	if (nb < 0)
	{
		sign = -1;
		nb *= -1;
	}
	if (nb == 0)
		write(1, "0", 1);
	print(nb, sign);
}

void	print(int nb, int sign)
{
	int	c;

	if (nb == 0)
	{
		if (sign == -1)
			write(1, "-", 1);
		return ;
	}
	c = nb % 10;
	nb = nb / 10;
	print(nb, sign);
	c += 48;
	write(1, &c, 1);
}
