/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoska <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 12:08:16 by tmoska            #+#    #+#             */
/*   Updated: 2016/11/17 13:42:27 by tmoska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
	ft_putchar('\n');
}

void	print_params(int argc, char **argv, char *f_name)
{
	int a;

	a = 0;
	while (a < argc)
	{
		if (argv[a] != f_name)
			ft_putstr(argv[a]);
		a++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 && s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int		main(int argc, char **argv)
{
	int		a;
	int		b;
	char	*f_name;
	char	*tmp;

	f_name = argv[0];
	a = 0;
	b = 0;
	while (a < (argc - 1))
	{
		while (b < (argc - a - 1))
		{
			if (ft_strcmp(argv[b], argv[b + 1]) > 0)
			{
				tmp = argv[b];
				argv[b] = argv[b + 1];
				argv[b + 1] = tmp;
			}
			b++;
		}
		a++;
		b = 1;
	}
	print_params(argc, argv, f_name);
	return (0);
}
