/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 18:26:16 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/29 18:36:04 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	a;
	int	b;

	if (nb <= 1)
		return (0);
	b = 0;
	a = 2;
	while (a < nb)
	{
		if ((nb % a == 0) && (a != nb))
			b++;
		a++;
	}
	if (b != 0)
		return (0);
	return (1);
}
