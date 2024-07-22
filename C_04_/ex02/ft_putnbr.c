/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 18:47:28 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/16 13:13:01 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print(int nb, int sign);

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