/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 14:32:16 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/30 15:04:32 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

void	ft_show_tab(struct s_stock_str *par);

int	main(void)
{
	char	**av;
	struct s_stock_str		*tabs;

	av = (char **) malloc (3);
	av[0] = "hi";
	av[1] = "hell0";
	av[2] = "greetings";
	
	tabs = ft_strs_to_tab(3, av);
	ft_show_tab(tabs);
	return(0);
}
