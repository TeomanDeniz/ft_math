/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atan2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:04:12 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/19 17:20:58 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

double
	ft_atan2(register double y, register double x)
{
	if (ft_isnan(x) || ft_isnan(y))
		return (0.0 / 0.0);
	if (x == 0.0)
	{
		if (y > 0.0)
			return (M_PI_2);
		if (y < 0.0)
			return (-M_PI_2);
		return (0.0);
	}
	if (!(ft_isinf(y) && ft_isinf(x)))
		return (ft_atan(y / x));
	if (x > 0.0)
	{
		if (y > 0.0)
			return (M_PI_4);
		return (-M_PI_4);
	}
	if (y > 0.0)
		return (3.0 * M_PI_4);
	return (-3.0 * M_PI_4);
}
