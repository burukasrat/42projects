/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 13:57:55 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/15 14:01:28 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;
	
	a = 13;
	b = 5;
	ft_ultimate_div_mod(&a, &b);
	a += 48;
	b += 48;
	write(1, &a, 1);
	write(1, " ", 1);
	write(1, &b, 1);
	return (0);
}
