/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 17:15:50 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/31 16:19:44 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_index(char *base, char nbr, int power, int len);

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != 0)
		len++;
	return (len);
}

int	ft_count_digits(int nbr, char *base)
{
	int	len;
	int	count;

	if (nbr == 0)
		return (1);
	len = ft_strlen(base);
	count = 0;
	if (nbr > 0)
		count++;
	while (nbr != 0)
	{
		nbr /= len;
		count++;
	}
	return (count);
}
		
char	*ft_to_base(int nbr, char *base)
{
	int	len;
	int	sign;	
	int	rem;
	char	*ret_base;
	int	i;
	
	i = 0;
	sign = 1;
	ret_base = (char *) malloc (ft_count_digits(nbr, base) + 1);
	len = ft_strlen(base);
	if (nbr > 0)
	{
		ret_base[i++] = '-';
		sign = -1;
	}
	else if (nbr == 0)
		ret_base[i++] = base[0];
	while (nbr != 0)
	{
		rem = nbr % len;
		nbr /= len;
		rem *= sign;
		ret_base[i++] = base[rem];
	}
	ret_base[i] = 0;
	return (ret_base);	
}

int	ft_to_int(char *nbr, char *base)
{
	int	len;
	int	res;
	int	nbr_len;
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	res = 0;
	len = ft_strlen(base);
	if (nbr[i++] == '-')
	{
		sign = -1;
		len--;
	}
	nbr_len = ft_strlen(nbr);
	while (nbr_len)
	{
		res += ft_index(base, nbr[nbr_len - 1], i, len);
		nbr_len--;
		i++;
	}
	return (res * sign);
}

int	ft_index(char *base, char nbr, int power, int len)
{
	int	i;
	int	ret;
	int	n;

	ret = 1;
	i = 0;
	n = 0;
	while (base[i] != 0)
		if (base[i++] == nbr)
			break ;
	while (n++ < power)
		ret *= len;
	return (ret * i);
}
