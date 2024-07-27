/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 12:10:17 by jyriarte          #+#    #+#             */
/*   Updated: 2024/07/27 17:48:17 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	ft_putstr(char *s)
{
	while (*s)
	{
		write(1, &(*s), 1);
		s++;
	}
}

int	ft_ch_is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_str_len(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*copy;
	int		src_len;

	src_len = ft_str_len(src);
	copy = (char *) malloc ((src_len + 1) * sizeof (char));
	ft_strcpy(copy, src);
	return (copy);
}

char	*ft_str_chr(char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s++;
	}
	return (NULL);
}

char	*ft_trim(char *str)
{
	char	*end;

	while (*str == ' ' || *str == '\t')
	{
		str++;
	}
	if (*str == 0)
	{
		return (str);
	}
	end = str + ft_str_len(str) - 1;
	while (end > str && (*end == ' ' || *end == '\t'))
	{
		end--;
	}
	*(end + 1) = '\0';
	return (str);
}

void	*ft_mem_cpy(void *dest, void *src, size_t n)
{
	char		*d;
	char	*s = src;

	d = dest;
	while (n--)
	{
		*d++ = *s++;
	}
	return (dest);
}

int	ft_atoi(char *str)
{
	int	res;
	int	is_negative;
	int	i;

	i = 0;
	res = 0;
	is_negative = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			is_negative = -is_negative;
		i++;
	}
	while (ft_ch_is_numeric(str[i]))
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * is_negative);
}
