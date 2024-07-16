/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 16:37:18 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/16 16:49:29 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	not_alpha;
	char	first;
	
	first = *str;
	not_alpha = 0;
	while (*str)
	{
		if (!(((*str >= 65) && (*str <= 90)) || ((*str >= 97) && (*str <= 122))))
			not_alpha++;
		str++;
	}
	if ((not_alpha == 0) && (str))
		return (1);
	return (0);
}

