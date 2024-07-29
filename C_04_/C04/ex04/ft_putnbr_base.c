/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:02:17 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/29 17:56:55 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int nbr, char *base, int sign, int len);

int	validate_base(char *base)
{
	int	len;
	int	x;
	int	same;

	len = 0;
	while (base[len] != '\0')
	{
		same = 0;
		x = 0;
		if (base[len] == '+' || base[len] == '-')
			return (0);
		while (base[x] != '\0')
		{
			if (base[len] == base[x])
				same++;
			if (same > 1)
				return (0);
			x++;
		}
		len++;
	}
	return (len);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;
	int	sign;

	len = validate_base(base);
	sign = 1;
	if (len <= 1)
		return ;
	if (nbr == 0)
	{
		write(1, &(base[0]), 1);
		return ;
	}
	if (nbr < 0)
		sign = -1;
	print(nbr, base, sign, len);
}

void	print(int nbr, char *base, int sign, int len)
{
	int	rem;

	if (nbr == 0)
	{
		if (sign == -1)
			write(1, "-", 1);
		return ;
	}
	rem = nbr % len;
	nbr /= len;
	rem *= sign;
	print(nbr, base, sign, len);
	write(1, &(base[rem]), 1);
}
