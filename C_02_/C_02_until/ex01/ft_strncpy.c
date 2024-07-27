/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:27:13 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/24 12:00:07 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*ret;

	ret = dest;
	while (n - 1)
	{
		if (*src)
			*dest = *src;
		src++;
		dest++;
		n--;
	}
	*dest = '\0';
	return (ret);
}
