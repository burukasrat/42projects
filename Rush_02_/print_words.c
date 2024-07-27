int	int_len(int num)
{
	int	len;

	if (num == 0)
		return (1);
	
	len = 0;
	while (num)
	{
		len++;
		num /= 10;
	}
	return (len);
}

int	tens(int n)
{
	int	ret;

	ret = 1;
	while (n)
		ret *= 10;
	return (ret);
}

void	get_words_from_file(int num)
{
	//do some magic here
}

void	print_words(int num)
{
	int	len;
	int	divide;
	int	first;
	int	rem;
	
	if (num < 20)
	{
		// something from the file 
		// cuz this is the smallest
		// and we cant break it down
		get_words_from_file(num);
		return ;
	}
	len = int_len(num);
	// num here is more than two digits and greater than 19
	// if its two digit number 
	else if (num < 100)
	{
		divide = tens(len - 1);
		first = num / divide;
		rem = num % divide;
		if (rem == 0)
			get_words_from_file(num);
		else
		{
			get_words_from_file(first);
			get_words_from_file(rem);
		}
	}

	else if (num < 1000)
	{
		divide = tens(len - 1);
		first = num / divide;
		rem = num / divide;
		if (rem == 0)
			// rem is 0 
			// then just send the num
			get_words_from_file(num);
		//else then print first and then print divide*10
		//then send the rem if not zero;
		else
		{
			get_words_from_file(first);
			get_words_from_file(divide * 10);
			get_words_from_file(rem);
		}
	}
	else if (num =< 1000)
	{
		//

		
	
