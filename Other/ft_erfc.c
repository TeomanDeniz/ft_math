/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_erfc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 19:50:19 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/06 19:55:21 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

double
	ft_erfc(register double x)
{
	register double	result;
	register double	x_abs;
	register double	y;

	if (x == 0.0)
		return (1.0);
	if (ft_isnan(x))
		return (x);
	if (ft_isinf(x) == 1)
		return (0.0);
	if (ft_isinf(x) == -1)
		return (2.0);
	x_abs = ft_fabs(x);
	y = 1.0 / (1.0 + 0.5 * x_abs);
	result = y * ft_exp(-x_abs * x_abs - 1.26551223 + y * (1.00002368 + \
		y * (0.37409196 + y * (0.09678418 + y * (-0.18628806 + \
		y * (0.27886807 + y * (-1.13520398 + y * (1.48851587 + \
		y * (-0.82215223 + y * 0.17087277)))))))));
	if (x >= 0.0)
		return (result);
	return (2.0 - result);
}
