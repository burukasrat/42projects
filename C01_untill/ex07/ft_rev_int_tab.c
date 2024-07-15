/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 14:20:41 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/15 14:44:06 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	hlen;
	int	*t;
	int	value;

	hlen = size / 2;
	t = tab + size - 1;
	while (hlen)
	{
		value = *tab;
		*tab = *t;
		*t = value;
		tab++;
		t--;
		hlen--;
	}
}
