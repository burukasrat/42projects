/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 12:18:37 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/30 12:22:31 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int	min;
	int	max;
	int	*range;
	int	len;
	int 	i;

	min = 5;
	max = 10;
	len = ft_ultimate_range(&range, min, max);
	i = 0;
	if (len == -1)
	{
		printf("range error");
		return (0);
	}
	while (i < len)
		printf("%d, ", range[i++]);
	return (0);
}
