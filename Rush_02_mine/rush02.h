/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 10:32:22 by jyriarte          #+#    #+#             */
/*   Updated: 2024/07/27 16:49:34 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
#define RUSH02_H

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 4096

typedef struct s_dict
{
	char *number;
	char *word;
	struct s_dict *next;
}		t_dict;

void ft_putstr(char *s);
int	ft_ch_is_numeric(char c);
int	ft_atoi(char *str);
int parse_dictionary(char *filename, t_dict *head);
int	ft_str_len(char *str);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strdup(char *src);
char	*ft_str_chr(char *s, int c);
char	*ft_trim(char *str);
void	*ft_mem_cpy(void *dest, void *src, size_t n);

#endif
