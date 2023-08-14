/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_log1p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 14:26:58 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/25 14:26:59 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

double
	ft_log1p(register double x)
{
	register double	y;

	if (ft_isnan(x) || ft_isinf(x))
		return (x);
	if (x == -1.0)
		return (-1.0 / 0.0);
	if (x < -1.0)
		return (-0.0 / 0.0);
	if (x < 1E-15)
		return (x - 0.5 * x * x);
	y = 1.0 + x;
	return (ft_log(y) - ((y - 1.0) - x) / y);
}
