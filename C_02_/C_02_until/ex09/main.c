/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 14:02:31 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/18 14:09:09 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str);

int	main(int argc, char *argv[])
{
	char	str[] = "HELLO salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un  suddENLY";
	char	*st;

	st = ft_strcapitalize(str);
	while (*st)
	{
		write(1, st, 1);
		st++;
	}
	return (0);
}
