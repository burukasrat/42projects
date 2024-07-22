int	ft_fibonacci(int index)
{
	int	value;
	
	if (index < 0)
		return (-1);
	else if (index == 1)
		return (0);
	else if (index == 2)
		return (1);
	value = ft_fibonacci(index - 1);
	return (value + ft

