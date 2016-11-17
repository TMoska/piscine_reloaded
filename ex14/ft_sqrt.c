/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoska <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 12:08:40 by tmoska            #+#    #+#             */
/*   Updated: 2016/11/17 13:40:24 by tmoska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		pw_mid = mid * mid;
		if (mid > 46341 || pw_mid > nb)
			max = mid;
		else if (pw_mid == nb)
			return (mid);
		else
			min = mid;
	}
}
