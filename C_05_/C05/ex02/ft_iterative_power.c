/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 18:09:33 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/29 18:10:33 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	ret;

	ret = 1;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (power)
	{
		ret *= nb;
		power--;
	}
	return (ret);
}
