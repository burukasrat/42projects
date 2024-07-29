/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 16:09:25 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/29 17:53:16 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int	validate_base(char *base)
{
	int	len;
	int	x;
	int	same;

	len = 0;
	while (base[len] != 0)
	{
		same = 0;
		x = 0;
		if (base[len] == '+' || base[len] == '-' || base[len] == ' ')
			return (0);
		while (base[x] != 0)
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

int	ft_make_atoi_base(char **str, char *base)
{
	int	i;
	int	sign;

	sign = 1;
	i = 0;
	while (**str && **str == ' ')
		*str += 1;
	while (**str && (**str == '+' || **str == '-'))
	{
		if (**str == '-')
			sign *= -1;
		*str += 1;
	}
	while ((*str)[i] != 0 && is_base((*str)[i], base))
		i++;
	if ((*str)[i] != 0)
		(*str)[i] = 0;
	return (i * sign);
}

int	ft_index(char *str, char c, int power, int len)
{
	int	i;
	int	ret;
	int	n;

	ret = 1;
	i = 0;
	n = 0;
	while (str[i] != 0)
	{
		if (str[i] == c)
			break ;
		i++;
	}
	while (n++ < power)
		ret *= len;
	return (ret * i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	len;
	int	res;
	int	str_len;
	int	i;
	int	sign;

	sign = 1;
	len = validate_base(base);
	if (len <= 1)
		return (0);
	str_len = ft_make_atoi_base(&str, base);
	if (str_len < 0)
	{
		str_len *= -1;
		sign = -1;
	}
	i = 0;
	res = 0;
	while (str_len)
	{
		res += ft_index(base, str[str_len - 1], i, len);
		str_len--;
		i++;
	}
	return (res * sign);
}
