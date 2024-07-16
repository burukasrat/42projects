/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 14:14:57 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/15 14:18:18 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str);

int	main(void)
{
	int	len;
	char	*str;

	str = "abcde";
	len = ft_strlen(str);
	len += 48;
	write(1, &len, 1);
	return (0);
}
