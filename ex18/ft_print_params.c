void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
	ft_putchar('\n');;
}

int	main(int argv, char **argc)
{
	int	indx;

	indx = 0;
	while (argv-- > 1)
		ft_putstr(argc[++indx]);
	return (0);
}
