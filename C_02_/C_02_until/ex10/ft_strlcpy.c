unsigned int 	strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

unsigned int	ft_stlcpy(char *dest, char *src, unsigned int size)
{
	char	*st;
	unsigned int	len;

	st = src;
	len = strlen(st);
	while (size - 1)
	{
		*dest = *src;
		dest++;
		src++;
		size--;
	}
	*dest = '\0';
	return (len);
}
