/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 12:37:00 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/30 15:28:57 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char	**strs;
	int	size;
	char	*sep;

	sep = "/-/";
	size = 5;
	strs = (char **) malloc (size);
	strs[0] = (char *) malloc (5);
	strs[0] = "hello";
	strs[1] = "amazing";
	strs[2] = "great";
	strs[3] = "confindent";
	strs[4] = "somehting";
	printf("%s\n", ft_strjoin(size, strs, sep));
	free(strs);
	return (0);
}	
