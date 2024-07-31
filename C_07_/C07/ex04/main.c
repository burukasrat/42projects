/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:10:04 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/31 16:29:18 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(void)
{
	char	*base_from;
	char	*base_to;
	char	*nbr;
	char	*ret;

	base_from = "0123456789ABCDEF";
	base_to = "012345";
	nbr = "AA";
	ret = ft_convert_base(nbr, base_from, base_to);
	printf("\nfinal: %s", ret);
	return (0);
}
