/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atan2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:04:12 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/23 16:04:13 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../ft_math.h"

double
	ft_atan2(double y, double x)
{
	if (ft_isnan(x) || ft_isnan(y))
		return (0.0 / 0.0);
	if (x == 0)
	{
		if (y > 0)
			return (M_PI_2);
		if (y < 0)
			return (-M_PI_2);
		return (0);
	}
	if (!(ft_isinf(y) && ft_isinf(x)))
		return (ft_atan(y / x));
	if (x > 0)
	{
		if (y > 0)
			return (M_PI_4);
		return (-M_PI_4);
	}
	if (y > 0)
		return (3 * M_PI_4);
	return (-3 * M_PI_4);
}
