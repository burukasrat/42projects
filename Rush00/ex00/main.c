/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 14:47:51 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/14 14:48:00 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	rush(int x, int y);

//We'll use ft_atoi to pass arguments trough main.
//It stands for Ascii to integer.
//It is used to a string  into  numbers. char -> int.

//In this case i initiated 2 variables, one is sign and one is num.

//The first while loop is responsible for skipping white spaces.
//It checks the value of the current str character by deferencing the pointer.
//If it's a space, it increments the pointer position by 1.

//Second while loop is responsible for sign. 
//It will checks for '-' and '+'.
//In both cases will increment pointer position by 1.
//If current sign is -1 we'll assign it to the sign variable.

//And finally we'll convert the string into numbers.
//We multiply by 10 to shift the digit left by one place.
//We then subtract the ascii value of '0' to find the number we're looking for.
//That's because numbers in ascii are consecutive.
//Finally we multiply number by sign. 
//We've now converted the string into a number.

//Atoi is important because "main" by default
// takes an array of pointers to char.
//Each element points to a null terminated string.
//Atoi will conver the string representing a number into an actual integer.

int	ft_atoi(char *str)
{
	int	num;
	int	sign;

	num = 0;
	sign = 1;
	while (*str == ' ')
	{
		str++;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			sign = -1;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	return (num * sign);
}

void	putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	int	x;
	int	y;
	int	i;

	i = 0;
	if (ac != 3)
	{
		putstr("I would really love to eat 2 arguments for breakfast\n");
		return (1);
	}
	if ((av[1][i] < '0' || av[1][i] > '9')
	|| (av[2][i] < '0' || av[2][i] > '9'))
	{
		putstr("Please only numbers. I'm not really into chars\n");
		return (1);
	}
	x = ft_atoi(av[1]);
	y = ft_atoi(av[2]);
	rush(x, y);
	return (0);
}
