/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 14:00:57 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/18 14:11:42 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alphanumeric(char c)
{
	if (((c >= '0') && (c <= '9')) || ((c >= 'a') && (c <= 'z'))
		|| ((c >= 'A') && (c <= 'Z')))
		return (1);
	return (0);
}

int	is_loweralpha(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	return (0);
}

int	is_upperalpha(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	char	*st;
	int		n;

	n = 0;
	st = str;
	while (*(st))
	{
		if (((n == 0) && (is_loweralpha(*st)))
			|| (!(is_alphanumeric(*(st - 1))) && (is_loweralpha(*st))))
			*st -= 32;
		else if ((n != 0) && (is_upperalpha(*st)))
			*st += 32;
		st++;
		n++;
	}
	return (str);
}
