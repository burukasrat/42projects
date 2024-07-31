/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 12:24:03 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/30 13:31:44 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>


int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != 0)
		len++;
	return (len);
}

int	ft_count(char **strs, int size, char *sep)
{
	int	len;
	int	i;

	if (size == 0)
		return (0);
	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		if (i < size - 1)
			len += ft_strlen(sep);
		i++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int	len;
	int	i;
	int	j;
	int	x;
	
	len = ft_count(strs, size, sep);
	str = (char *) malloc (len + 1);
	if (!str)
		return NULL;
	if (size == 0)
	{
		str[0] = 0;
		return str;
	}
	i = 0;
	x = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != 0)
			str[x++] = strs[i][j++];
		j = 0;
		if (i < size - 1)
			while (sep[j] != 0)
				str[x++] = sep[j++];
		i++;
	}
	str[x] = 0;
	return (str);
}
