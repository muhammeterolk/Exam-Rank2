int	    is_power_of_2(unsigned int n)
{
	int nbr = 1;

	while (n >= nbr)
	{
		if (n == nbr)
			return (1);
		nbr *= 2;
	}
	return (0);
}
