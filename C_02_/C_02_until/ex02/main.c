/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 16:49:36 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/16 16:53:47 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	*str;
	int	ret;

	str = "";
	ret = ft_str_is_alpha(str);
	ret += 48;
	write(1, &ret, 1);
	return (0);
}
