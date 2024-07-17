/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 17:29:20 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/17 10:38:57 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	int	ret;
	char	*str;

	str = "1234a";
	ret = ft_str_is_numeric(str);
	ret += 48;
	write(1, &ret, 1);
	str = "";
	ret = ft_str_is_numeric(str);
	ret += 48;
	write(1, &ret, 1);
	str = "1234";
	ret = ft_str_is_numeric(str);
	ret += 48;
	write(1, &ret, 1);
	return (0);
}
