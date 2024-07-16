#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	array[6] = {3, 4, 6, 1, 5, 2};
	int	size;
	int	*tab;
	int	a;
	int	print;

	a = 0;
	size = 6;
	tab = &array[0];
	ft_sort_int_tab(tab, size);
	while (a < size)
	{
		print = array[a] + 48;
		write(1,  &print, 1);
		a++;
	}
	return (0);
}
