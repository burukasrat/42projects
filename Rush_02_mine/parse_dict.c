/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 15:20:33 by jyriarte          #+#    #+#             */
/*   Updated: 2024/07/27 18:09:48 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

t_dict	*ft_append_lsit(t_dict *tail, char *number, char *word)
{
	t_dict *temp;

    temp = (t_dict *)malloc(sizeof(t_dict));
    if (!temp)
        return NULL;
    tail->number = ft_strdup(number);
    tail->word = ft_strdup(word);
    temp->next = NULL;
    tail->next = temp;
    return (temp);
}

int	parse_dictionary(char *filename, t_dict *head)
{
	int	fd;
	char	buffer[BUFFER_SIZE];
	int		bytes_read;
	int		line_start;
	t_dict	*tail;
	int		i;
	char	*line;
	char	*colon;
	char	*number_str;
	char	*word;
	int		remaining;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (1);
	}
	line_start = 0;
	tail = head;
	while ((bytes_read = read(fd, buffer + line_start, BUFFER_SIZE
				- line_start)) > 0)
	{
		i = 0;
		while (i < bytes_read + line_start)
		{
			if (buffer[i] == '\n')
			{
				buffer[i] = '\0';
				line = buffer + line_start;
				colon = ft_str_chr(line, ':');
				if (colon != NULL)
				{
					*colon = '\0';
					number_str = ft_trim(line);
					word = ft_trim(colon + 1);
					if (ft_str_len(number_str) > 0 && ft_str_len(word) > 0)
					{
						tail = ft_append_lsit(tail, number_str, word);
					}
				}
				line_start = i + 1;
			}
			i++;
		}
		if (line_start < i)
		{
			remaining = i - line_start;
			ft_mem_cpy(buffer, buffer + line_start, remaining);
			line_start = remaining;
		}
	}
	close(fd);
	return (0);
}
