/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 14:41:39 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/18 15:12:00 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(int argc, char *argv[])
{
	char	*s1;
	char	*s2;
	int	ret;
	int	n;

	s1 = "abc";
	s2 = "ab";

	if (argc <= 3)
	{
		write(1, s1, 3);
		write(1, " ", 1);
		write(1, s2, 2);
		write(1, "\n", 1);
		ret = ft_strncmp(s1, s2, 2);
	}
	else
	{
		n = *argv[3] - 48;
		ret = ft_strncmp(argv[1], argv[2], n);
	}
	if (ret == 0)
		write(1, "equal", 5);
	else if (ret == 1)
		write(1, "s1 is greater", 13);
	else
		write(1, "s1 is lesser", 12);
	return (0);
}
