/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 12:15:46 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/17 12:36:02 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str);

void	print(char *str)
{
	char	*st;
	
	st = str;
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	str = st;
}

int	main(void)
{
	char	str[] = "abcdCD123, haah";
	char	*st;
	
	write(1, &str, 15);
	write(1, "\n", 1);
	st = ft_strupcase(str);
	while (*st)
	{
		write(1, st, 1);
		st++;
	}
	return (0);
}
