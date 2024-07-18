int	is_alphanumeric(char	c)
{
	if (((c >= '0') && (c <= '9')) || ((c >= 'a') && (c <= 'z'))
			|| ((c >= 'A') && (c <= 'Z')))
		return (1);
	return (0);
}

int	is_loweralpha(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	char	*st;
	int	n;

	n = 0;
	st = str;
	while (*(st))
	{
		if ((n == 0) && (is_loweralpha(*st)))
			*st -= 32;
		else if (!(is_alphanumeric(*(st - 1))) && (is_loweralpha(*st)))
			*st -= 32;
		st++;
		n++;
	}
	return (str);
}
