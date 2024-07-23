#include <unistd.h>

char	*ft_strdup(char *src);

void	putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	main(void)
{
	char	*str;
	char	*str1;

	str = "hello world";
	str1 = ft_strdup(str);
	putstr(str1);
	return (0);
}
