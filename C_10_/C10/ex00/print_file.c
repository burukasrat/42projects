/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 17:21:05 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/31 18:35:34 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_read(int file)
{

int	main(int argc, char **argv)
{
	int	file;

	if (argc < 2)
	{
		ft_putstr("File name missing.\n");
		return (1);
	}
	else if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (1);
	}
	file = open(argv[1], O_RDONLY);
	if (!file)
	{
		ft_putstr("Cannot read file.\n");
		return (1);
	}
	ft_read(file);
	return (0);
}
