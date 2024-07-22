/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:59:30 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/18 13:59:44 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*st;

	st = str;
	while (*st)
	{
		if ((*st >= 65) && (*st < 91))
			*st += 32;
		st++;
	}
	return (str);
}
