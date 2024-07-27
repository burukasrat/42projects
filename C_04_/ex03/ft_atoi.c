/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:59:42 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/24 14:03:28 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_digit(char *str)
{
	if ((*str >= '0') && (*str <= '9'))
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	digit;
	int	nbr;
	int	inter;
	int	sign;

	sign = 0;
	nbr = 0;
	digit = 0;
	while (*str && (*str == '-' || *str == '+' || *str == ' ' || is_digit(str)))
	{
		if (is_digit(str))
		{
			digit++;
			inter = *str;
			inter -= 48;
			nbr = nbr * 10 + inter;
		}
		else if ((digit != 0) && (is_digit(str) == 0))
			break ;
		else if (*str == '-')
			sign++;
		str++;
	}
	if (sign % 2 == 1)
		nbr *= -1;
	return (nbr);
}
