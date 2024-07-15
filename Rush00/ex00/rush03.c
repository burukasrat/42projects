/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 14:48:12 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/14 16:27:50 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//We made a double while loop. One handles columns the other rows.
//Inside the inner loop we check conditions for each letters.
//If no conditions are satisfyied we fill the square with white spaces.
//Once we're done with the first row, we reset j to 0 and print a new line.
//We're now ready to start with a new row.
//Repeat the process.

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < y)
	{
		while (j < x)
		{
			if (((j == 0) && (i == 0)) || ((j == 0) && (i == y - 1)))
				ft_putchar('A');
			else if ((((j >= 1) && (j < x - 1)) && ((i == 0) || (i == y - 1)))
				|| ((i >= 1) && (i < y - 1) && ((j == 0) || (j == x - 1))))
				ft_putchar('B');
			else if ((j == x - 1) && ((i == 0) || (i == y - 1)))
				ft_putchar('C');
			else
				ft_putchar(' ');
			j++;
		}
		j = 0;
		ft_putchar('\n');
		i++;
	}
}
