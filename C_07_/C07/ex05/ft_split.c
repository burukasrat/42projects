/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 12:40:32 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/31 18:35:39 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	ft_in_str(char c, char *charset)
{
	while (*charset)
	{
		if (*charset == c)
			return (*charset);
		charset++;
	}
	return (NULL);
}

int	ft_num(char *str, char *charset)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i] != 0)
	{
		if (ft_in_str(str[i], charset))
			len++;
		i++;
	}
	return (0);
}

char	**ft_split(char *str, char *charset)
{
	char	**array;
	int	i;
	int	len;
	int	begin;

	array = (char **) malloc (ft_num(str, charset));
	i = 0;
	while (str[i] != 0 && !ft_in_str(str[i], charset))
		i++;
	begin = i;
	while (str[i] != 0)
	{
		len = 0;
		while (str[begin] != 0 && !ft(str[begin], charset))
			begin++;
		if (str[begin] == 0)
			break ;
		*array = (char *) malloc (begin - i + 2);
		j = 0;
		while (j < begin - i + 2)
			*array[j] = 
		
}
