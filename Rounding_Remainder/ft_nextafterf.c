/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nextafterf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 18:58:04 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/19 22:12:06 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

float
	ft_nextafterf(register float x, register float y)
{
	if (ft_isnan(x) || ft_isnan(y))
		return (x + y);
	if (ft_isinf(y) || y <= 0.0F)
		return (x);
	if (x == y)
		return (y);
	if (ft_isinf(x))
		return (ft_copysignf(FLT_MAX, x));
	if (x == 0.0F)
		return (ft_copysignf(FLT_MIN, y));
	if ((y - x) > 0.0F)
		return (x);
	return (-x);
}
