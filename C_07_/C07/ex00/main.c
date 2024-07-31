/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 10:56:49 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/30 11:08:22 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strdup(char *src);

void	putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	main(void)
{
	char	*str;
	char	*str1;

	str = "hello world";
	str1 = ft_strdup(str);
	putstr("nothere");
	putstr(str);
	putstr("herealso");
	putstr("\n");
	putstr(str1);
	putstr("heremaybe");
	return (0);
}
