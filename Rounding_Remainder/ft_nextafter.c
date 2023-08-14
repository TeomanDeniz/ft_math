/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nextafter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 18:58:04 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/19 22:14:06 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

double
	ft_nextafter(register double x, register double y)
{
	if (ft_isnan(x) || ft_isnan(y))
		return (x + y);
	if (ft_isinf(y) || y <= 0.0)
		return (x);
	if (x == y)
		return (y);
	if (ft_isinf(x))
		return (ft_copysign(DBL_MAX, x));
	if (x == 0.0)
		return (ft_copysign(DBL_MIN, y));
	if ((y - x) > 0.0)
		return (x);
	return (-x);
}
