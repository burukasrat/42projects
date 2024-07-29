/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 15:43:28 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/29 16:05:02 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int     main(void)
{
        int     nbr;
        char    *base;

        base = "0123456789ABCDEF";
        nbr = -35;
	printf("%d", nbr / 10);
        //ft_putnbr_base(nbr, base);
        return (0);
}

