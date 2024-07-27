#include <stdio.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int	*ptr;

	ptr = ft_range(3, 5);
	printf("%d ", ptr[0]);
	ptr++;
	printf("%d", ptr[1]);
	return (0);
}
