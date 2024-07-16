/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:27:13 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/16 14:34:28 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*ret;
	
	ret = dest;
	while(n)
	{
		if (*src)
			*dest = *src;
		else
			*dest = '\0';
		src++;
		dest++;
		n--;
	}
	return (ret);
}	
