#include <unistd.h>

int	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	main(int argc, char *argv[])
{
	int	param;

	param = argc - 1;
	while (param)
	{
		ft_putstr(argv[param]);
		if(param)
			write(1, "\n", 1);
		param--;
	}
	return (0);
}
