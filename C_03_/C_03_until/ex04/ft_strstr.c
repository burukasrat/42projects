/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 16:01:37 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/18 17:29:29 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

int	check_pattern(char *str, char *pattern, int len_patt)
{
	int	same;

	same = 0;
	while ((*pattern) && (*str))
	{
		if (*str == *pattern)
			same++;
		str++;
		pattern++;
	}
	if (same == len_patt)
		return (1);
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	len_patt;
	char	*st;
	
	len_patt = ft_strlen(to_find);
	if (len_patt == 0)
		return (str);
	while (*str)
	{
		if ((*str == *to_find) && (check_pattern(*str, *to_find, len_patt)))
			return (str);
		str++;
	}
	return 
