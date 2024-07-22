#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	write(1, "./", 2);
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

void	print_name(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	main(int argc, char *argv[])
{
	char	*str;
	int	len;
	
	str = argv[0];
	len = ft_strlen(str);
	str = str + len - 1;
	while(*str != '\\')
		str--;
	print_name(++str);
	write(1, "\n", 1);
	return (0);
}
