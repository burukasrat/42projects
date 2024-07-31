/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:15:19 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/30 15:34:07 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	range;

	array = (int *) malloc ((max - min) * 4);
	if (min >= max)
		return (NULL);
	range = min;
	while (range < max)
	{
		array[range - min] = range;
		range++;
	}
	return (array);
}
