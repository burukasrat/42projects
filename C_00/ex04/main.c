/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 15:27:13 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/15 12:13:02 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_is_negative(int n);

int     ft_atoi(char *str)
{
        int     num;
        int     sign;

        num = 0;
        sign = 0;
        while (*str == ' ')
        {
                str++;
        }
        while (*str == '-' || *str == '+')
        {
                if (*str == '-')
                {
                        sign += 1;
                }
                str++;
        }
	sign = sign % 2 ? -1 : 1;
        while (*str >= '0' && *str <= '9')
        {
                num = num * 10 + (*str - '0');
                str++;
        }
        return (num * sign);
}

int     main(int argc, char* argv[])
{
	int	a;

	a = 42;
        ft_is_negative(a);
	ft_is_negative(a);
	ft_is_negative(a);
        return (0);
}
