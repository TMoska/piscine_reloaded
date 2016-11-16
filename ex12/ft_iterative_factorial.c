/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoska <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 21:59:03 by tmoska            #+#    #+#             */
/*   Updated: 2016/11/16 22:03:59 by tmoska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int result;

	if ((nb < 0) || (nb > 12))
		return (0);
	else if (nb == 0)
		return (1);
	result = nb;
	while (--nb > 0)
	{
		result *= nb;
	}
	return (result);
}
