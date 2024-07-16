void	ft_sort_int_tab(int *tab, int size)
{
	int	x;
	int	y;
	int	value;
	int	sw;
	int	*tabo;

	x = 0;
	while (x < size)
	{
		y = 0;
		sw = 0;
		tabo = tab;
		while (y < size - 1)
		{
			if (*tabo > *(tabo + 1))
			{
				value = *tabo;
				*tabo = *(tabo + 1);
				*(tabo + 1) = value;
				sw++;
			}
			tabo++;
			y++;
		}
		if (sw == 0)
			return ;
		x++;
	}
}
