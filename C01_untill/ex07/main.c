/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 14:26:54 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/15 14:48:31 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	num[6] = {1, 2, 3, 4, 5, 6};
	int	size = 6;
	int	print;

	ft_rev_int_tab(&num[0], size);
	size = 0;
	while (size < 6)
	{
		print = num[size] + 48;
		write(1, &print, 1);
		size++;
	}
	return (0);
}
