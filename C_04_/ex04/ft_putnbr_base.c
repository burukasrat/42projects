/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:02:17 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/24 13:26:23 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
	int	rem;
	
	len = validate_base(base);
	if (len <= 1 || nbr == 0)
		return ;
	rem = nbr % len;
	nbr /= len;
	ft_putnbr_base(nbr, base);
	write(1, &(base[rem]), 1);
}

int	main(void)
{
	int	nbr;
	char	*base;

	base = "0123456789ABCDEF";
	nbr = 35;
	ft_putnbr_base(nbr, base);
	return (0);
}
