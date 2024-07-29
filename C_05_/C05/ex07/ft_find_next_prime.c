/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 18:30:21 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/29 18:35:29 by btsegaye         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
		return (nb);
	return (ft_find_next_prime(nb + 1));
}
