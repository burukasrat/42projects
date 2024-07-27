/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:59:42 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/24 13:58:37 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_base(char c, char *base)
{
	while (*base)
	{
		if (*base == c)
			return (1);
		base++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	digit;
	int	nbr;
	int	inter;
	int	sign;

	sign = 0;
	nbr = 0;
	digit = 0;
	len = validate_base(base);
	if (len <= 1)
		return (0);
	while (*str || *str == '-' || *str == '+' || *str == ' ' || is_base(*str, base))
	{
		if (is_base(*str, base))
		{
			digit++;
			inter = *str;
			inter -= 48;
			nbr = nbr * 10 + inter;
		}
		else if ((digit != 0) && (is_base(*str, base) == 0))
			break ;
		else if (*str == '-')
			sign++;
		str++;
	}
	if (sign % 2 == 1)
		nbr *= -1;
	return (nbr);
}

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
		if (base[len] == '+' || base[len] == '-' || base[len] == ' ')
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

int	ft_putnbr_base(int nbr, char *base)
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
