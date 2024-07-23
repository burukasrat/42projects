#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	range;

	if (min == max)
		return (array);
	range = max - min;
	array = (int*)malloc(range * 4);
	while (min < max)
	{
		*array = min;
		min++;
		array++;
	}
	return (array - range - 1);
}
