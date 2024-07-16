/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 16:55:01 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/16 17:29:07 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	not_numeric;

	not_numeric = 0;
	if (!(*str))
		return (1);
	while (*str)
	{
		if((*str >= 48) && (*str <= 57))
			not_numeric++;
		str++;
	}
	if (not_numeric == 0)
		return (1);
	return (0);
}
