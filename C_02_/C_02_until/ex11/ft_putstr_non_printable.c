#include <unistd.h>

void	puthexa(char c);

int	is_printable(char c)
{
	if ((c >= 32) && (c <= 126))
		return (1);
	return (0);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (is_printable(*str))
			write(1, str, 1);
		else
			puthexa(*str);
		str++;
	}
}

void	puthexa(char c)
{
	int	nbr;
	int	a;


	nbr = c;
	write(1, "\\", 1);
	a = nbr / 16;
	a += 48;
	write(1, &a, 1);
	a = nbr % 16;
	if (a < 10)
	{
		a += 48;
		write(1, &a, 1);
	}
	else
	{
		a += 87;
		write(1, &a, 1);
	}
}
