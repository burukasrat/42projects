/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 14:15:40 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/18 15:33:56 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	*str;
	char	dest[5];

	str = "Hello wor";
	ft_strlcpy(&dest[0], str, 5);
	
	char	*st = &dest[0];
	while (*st)
	{
		write (1, st, 1);
		st++;
	}
	return (0);
}
