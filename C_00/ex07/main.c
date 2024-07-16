/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 15:58:56 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/15 14:58:33 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);

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
        return (num*sign);
}

int	main(int argv, char *argc [])
{
	ft_putnbr(ft_atoi(argc[1]));
	return (0);
}
