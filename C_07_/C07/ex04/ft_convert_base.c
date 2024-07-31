/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 13:34:55 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/31 16:35:37 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_to_int(char *nbr, char *base);

char	*ft_to_base(int nbr, char *base);

int	ft_strlen(char *str);

int	ft_is_space(char c)
{
	if (c >= 9 && c <= 13)
		return (1);
	return (0);
}

int	ft_is_base(char c, char *base)
{
	while (*base)
	{
		if (*base == c)
			return (1);
		base++;
	}
	return (0);
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
	
char	*ft_atoi_base(char *nbr, char *base)
{
	int	i;
	int	len;
	int	sign;

	sign = 1;
	i = 0;
	len = 0;
	while (ft_is_space(nbr[i]) && nbr[i] != 0)
		i++;
	while ((nbr[i] == '+' || nbr[i] == '-') && nbr[i] != 0)
	{
		if (nbr[i] == '-')
			sign *= -1;
		if (ft_is_base(nbr[i + 1], base) && sign == -1)
			nbr[i] = '-';
		i++;
	}
	while (nbr[i] && ft_is_base(nbr[i], base))
	{
		len++;
		i++;
	}
	if (nbr[i] != 0)
		nbr[i] = 0;
	return (&nbr[i - len]);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		i_nbr;
	char	*input_nbr;
	char	*ret_base;

	if (!validate_base(base_from) || !validate_base(base_to))
		return (0);
	input_nbr = ft_atoi_base(nbr, base_from);
	printf("%s", input_nbr);
	i_nbr = ft_to_int(input_nbr, base_from);
	printf("%d", i_nbr);
	//if (i_nbr)
		//if i_nbr overflows return something or null
	ret_base = ft_to_base(i_nbr, base_to);
	return (ret_base);
}
