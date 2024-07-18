#include <unistd.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	str[] = "ABCDad 8987BGD";
	char	*st;

	st = ft_strlowcase(str);
	while (*st)
	{
		write(1, st, 1);
		st++;
	}
	return (0);
}
