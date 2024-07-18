/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 12:12:05 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/17 12:20:15 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*st;

	st = str;
	while (*st != '\0')
	{
		if ((*st >= 97) && (*st < 123))
			*st -= 32;
		st++;
	}
	return (str);
}
