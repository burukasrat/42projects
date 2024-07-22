#include <stdio.h>

int	ft_atoi(char *str);

int	main(int argc, char *argv[])
{
	int	ret;

	if (argc == 1)
		return (0);
	ret = ft_atoi(argv[1]);
	printf("%d", ret);
	return (0);
}
