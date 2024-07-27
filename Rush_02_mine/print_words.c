/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_words.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btsegaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 17:54:01 by btsegaye          #+#    #+#             */
/*   Updated: 2024/07/27 18:54:45 by btsegaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	int_len(int num)
{
	int	len;

	if (num == 0)
		return (1);
	
	len = 0;
	while (num)
	{
		len++;
		num /= 10;
	}
	return (len);
}

int	tens(int n)
{
	int	ret;

	ret = 1;
	while (n)
		ret *= 10;
	return (ret);
}

char	*ft_to_char(int num)
{
	char	*str;
	char	c;
	int	len;
	int	i;

	len = int_len(num);
	str = (char *)malloc(len + 1);
	if (n == 0)
	{
		str[0] = 48;
		str[1] = '\0';
		return (str);
	}
	i = 0;
	while (num)
	{
		c = (num / tens(len - 1)) + 48;
		num %= tens(len - 1);
		str[i] = c;
		i++;
	}
	str[++i] = '\0';
	return (str);
}

void	get_words_from_file(t_dict *list, int num)
{	
	//search for the number in the dict and return the word
	char	*number;
	t_dict	*temp;
	char	*error;

	temp = list;
	while (temp->next != NULL)
	{
		number = ft_to_char(num);
		if (temp->number == number)
		{
			ft_putstr(temp->word);
			return ;
		}
		temp = temp->next;
	}
	error = "did not find the number";
	ft_putstr(error);
	ft_putstr(number);
}

void	print_words(int num, t_dict *list)
{
	int	len;
	int	divide;
	int	first;
	int	rem;
	char	*word;

	//list = (t_dict *)malloc(sizeof(t_dict));
	//parse_dictionary("numbers.dict", 
	len = int_len(num);
	if (num < 20)
	{
		get_words_from_file(num);
		return 	;
	}
	// num here is more than two digits and greater than 19
	// if its two digit number 
	else if (num < 100)
	{
		divide = tens(len - 1);
		first = num / divide;
		rem = num % divide;
		if (rem == 0)
			get_words_from_file(num);
		else
		{
			get_words_from_file(first * divide);
			get_words_from_file(rem);
		}
	}
	else if (num < 1000)
	{
		divide = tens(len - 1);
		first = num / divide;
		rem = num / divide;
		if (rem == 0)
		{
			get_words_from_file(first);


		//else then print first and then print divide*10
		//then send the rem if not zero;
		else
		{
			get_words_from_file(first);
			get_words_from_file(divide);
			get_words_from_file(rem);
		}
	}
	else if (num => 1000)
	{
		//soomething
		divide = tens(len - 1);
		first = num / divide;
		rem = num % divide;
		if (rem == 0)
		{
			get_words_from_file(first);
			get_words_from_file(divide);
		}
		else
		{

		get_words_from_file(first);
		get_words_from_file(tens(len));




		
	
