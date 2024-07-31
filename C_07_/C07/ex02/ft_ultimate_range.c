/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 12:00:29 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/30 15:38:20 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len = min;
	*range = (int *) malloc ((max - min) * 4);
	if (!*range)
		return (-1);
	while (len < max)
	{
		(*range)[len - min] = len;
		len++;
	}
	return (max - min);
}
