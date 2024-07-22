/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 15:23:36 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/18 15:58:39 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int n);

int	main(int argc, char *argv[])
{
	char	s1[] = "hello";
	char	s2[] = " world";
	char	*str;
	int	nbr;
	
	if (argc <= 3)
		str = ft_strncat(s1, s2, 3);
	else
		nbr = *argv[3] - 48;
		str = ft_strncat(argv[1], argv[2], nbr);
	while (*str)
	{
		write (1, str, 1);
		str++;
	}
	return (0);
}
