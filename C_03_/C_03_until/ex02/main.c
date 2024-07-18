/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 15:23:36 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/18 15:29:18 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src);

int	main(int argc, char *argv[])
{
	char	s1[] = "hello";
	char	s2[] = " world";
	char	*str;
	
	if (argc <= 2)
		str = ft_strcat(s1, s2);
	else
		str = ft_strcat(argv[1], argv[2]);
	while (*str)
	{
		write (1, str, 1);
		str++;
	}
	return (0);
}
