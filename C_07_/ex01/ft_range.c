#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	array[max - min];
	int	range;

	if (min == max)
		return (array);
	range = min;
	//array = (int*)malloc((max - min) * 4);
	while (range < max)
	{
		array[range - min] = min;
		range++;
	}
	return (&array[0]);
}
