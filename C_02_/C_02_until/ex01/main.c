/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:34:40 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/16 14:52:35 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char str1[] = "abcdefg";
	char	dest[6];
	int	n = 12;
	char	*str2;
	char	print[] = "we about to die, no null-terminator";

	str2 = ft_strncpy(&dest[0], &str1[0], n);
	while(n)
	{	if(*str2)
			write(1, str2, 1);
		else
		{
			write(1, &print, 35);
			write(1, "\n", 1);
		}
		str2++;
		n--;
	}
	return (0);
}
