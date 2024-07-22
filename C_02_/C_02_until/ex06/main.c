/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 11:26:47 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/18 13:53:10 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str);

void	putnbr(int nbr)
{
	nbr += 48;
	write(1, &nbr, 1);
}

int	main(void)
{
	char	*str;
	int	ret;

	str = "~";
	ret = ft_str_is_printable(str);
	putnbr(ret);
	str = " 23 ";
	ret = ft_str_is_printable(str);
	putnbr(ret);
	str = "\0";
	ret = ft_str_is_printable(str);
	putnbr(ret);
	ret = 32;
	write(1, &ret, 1);
	ret = 31;
	write(1, &ret, 1);
	ret = 126;
	write(1, &ret, 1);
	return (0);
}
