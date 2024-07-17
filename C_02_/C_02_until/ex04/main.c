/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 10:44:50 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/17 11:01:16 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	*str;
	int	ret;

	str = "abcdD";
	ret = ft_str_is_lowercase(str);
	ret += 48;
	write(1, &ret, 1);
	str = "";
	ret = ft_str_is_lowercase(str);
	ret += 48;
	write(1, &ret, 1);
	str = "abcd";
	ret = ft_str_is_lowercase(str);
	ret += 48;
	write(1, &ret, 1);
	return (0);
}
