#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_putnbr(int nbr)
{
	char	c;

	if (nbr == 0)
		return ;
	c = (nbr % 10) + 48;
	ft_putnbr(nbr / 10);
	write(1, &c, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	ft_putstr(par->str);
	write(1, '\n', 1);
	ft_putnbr(par->size);
	write(1, '\n', 1);
	ft_putstr(par->copy);
	write(1, '\n', 1);
}
