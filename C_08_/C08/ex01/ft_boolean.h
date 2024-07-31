/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 12:50:52 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/30 16:11:06 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define EVEN_MSG "I have an even number of arguments\n"

# define ODD_MSG "I have an odd number of arguments\n"

# define SUCCESS 0

# define EVEN(nbr) ((nbr) % 2 == 0)

typedef enum s_bool
{
	TRUE,
	FALSE
}	t_bool;
#endif
