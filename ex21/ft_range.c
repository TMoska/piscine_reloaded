/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoska <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 12:36:38 by tmoska            #+#    #+#             */
/*   Updated: 2016/11/17 12:42:10 by tmoska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*str;
	int		*tmp;

	if (min >= max)
		return (0);
	str = (int*)malloc(sizeof(*str) * (max - min + 1));
	tmp = str;
	while (max > min)
	{
		*str = min;
		str++;
		min++;
	}
	*str = 0;
	return (tmp);
}
