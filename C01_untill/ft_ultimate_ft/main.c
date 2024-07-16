#include <unistd.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	a;
	int	*********ptr1;
	int	********ptr2;
	int	*******ptr3;
	int	******ptr4;
	int	*****ptr5;
	int	****ptr6;
	int	***ptr7;
	int	**ptr8;
	int	*ptr9;

	ptr9 = &a;
	ptr8 = &ptr9;
	ptr7 = &ptr8;
	ptr6 = &ptr7;
	ptr5 = &ptr6;
	ptr4 = &ptr5;
	ptr3 = &ptr4;
	ptr2 = &ptr3;
	ptr1 = &ptr2;

	a = 48;
	ft_ultimate_ft(ptr1);
	a += 9;
	write(1, &a, 1);
	return (0);
}
