/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 11:06:50 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/17 11:11:14 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	*str;
	int	ret;

	str = "ABCDz";
	ret = ft_str_is_uppercase(str);
	ret += 48;
	write(1, &ret, 1);
	str = "aBCD";
	ret = ft_str_is_uppercase(str);
	ret += 48;
	write(1, &ret, 1);
	str = "";
	ret = ft_str_is_uppercase(str);
	ret += 48;
	write(1, &ret, 1);
	str = "SBCD";
	ret = ft_str_is_uppercase(str);
	ret += 48;
	write(1, &ret, 1);
	return (0);
}
