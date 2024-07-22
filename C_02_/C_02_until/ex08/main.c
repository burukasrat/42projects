/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:59:48 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/18 13:59:59 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	str[] = "ABCDad 8987BGD";
	char	*st;

	st = ft_strlowcase(str);
	while (*st)
	{
		write(1, st, 1);
		st++;
	}
	return (0);
}
