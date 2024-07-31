/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:17:48 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/30 11:50:54 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int	*ptr;
	int	i;
	int	max;
	int	min;

	min = 5;
	max = 10;
	ptr = ft_range(min, max);
	i = 0;
	while (i < max - min)
		printf("%d ", ptr[i++]);
	return (0);
}
