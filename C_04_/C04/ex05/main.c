/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 16:58:01 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/29 17:43:04 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int	main(void)
{
	char	*base;
	char	*str;
	int	number;

	base = "01";
	str = "-101";
	number = ft_atoi_base(str, base);
	printf("%d", number);
	return (0);
}
