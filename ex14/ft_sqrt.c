int	ft_sqrt(int nb)
{
	int	min;
	int	max;
	int	mid;
	int	pw_mid;

	min = 0;
	max = nb;
	while (1)
	{
		mid = ((max - min) / 2) + min;
		if (nb == 0 || nb < 0)
			return (0);
		if (mid == min || mid == max)
			return (0);
		pw_mid = mid*mid;
		if (mid > 46341 || pw_mid > nb)
			max = mid;
		else if (pw_mid == nb)
			return (mid);
		else
			min = mid;
	}
}
