#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	len;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	**array;
	int	i;
	int	j;

	i = 0;
	while (i < ac)
	{
		*array->size = ft_strlen(av[i]);
		*array->str = av[i];
		j = 0;
		while (av[i][j])
		{
			*array->*copy = av[i][j];
			*array->copy++;
			j++;
		}
		i++;
	}
	return (array);
}
