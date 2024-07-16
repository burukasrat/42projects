/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 13:53:06 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/16 14:26:12 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	str1[] = "abcde";
	char	dest[6];
	char	*str2;

	str2 = ft_strcpy(&dest[0], &str1[0]);
	while(*str2)
	{
		write(1, str2, 1);
		str2++;
	}
	return (0);
}
