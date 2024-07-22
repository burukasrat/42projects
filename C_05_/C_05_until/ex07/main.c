#include <stdio.h>

int	ft_find_next_prime(int nb);

int	main(void)
{
	int	ret;

	ret = ft_find_next_prime(7);
	printf("%d", ret);

	ret = ft_find_next_prime(9);
	printf("%d", ret);
	return (0);
}
