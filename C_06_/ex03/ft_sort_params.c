#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 > *s2)
			return (1);
		else if (*s1 < *s2)
			return (-1);
		s1++;
		s2++;
	}
	if (*s1 == *s1)
		return (0);
	else if (*s1 > *s2)
		return (1);
	return (-1);
}
void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	main(int argc, char *argv[])
{
	int	arr[argc];
	int	x;
	int	y;
	char	*inter;

	x = 1;
	y = 1;

	while (x < argc)
	{
		y = 1;
		while (y < argc - 1)
		{
			if (ft_strcmp(argv[y],argv[y + 1]) == 1)
			{
				inter = argv[y];
				argv[y] = argv[y + 1];
				argv[y + 1] = inter;
			}
			y++;
		}
		x++;
	}
	
	x = 1;
	while (x < argc)
	{
		ft_putstr(argv[x]);
		write(1, "\n", 1);
		x++;
	}
	return (0);
}
