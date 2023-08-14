/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cbrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 12:28:15 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/19 21:17:16 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

double
	ft_cbrt(register double x)
{
	register double	result;
	register double	prev_result;

	if (x == 0.0 || x == -0.0 || ft_isinf(x) || ft_isnan(x))
		return (x);
	result = 1.0;
	prev_result = 0.0;
	while (ft_fabs(result - prev_result) > 1E-15)
	{
		prev_result = result;
		result = (2.0 * result + x / (result * result)) / 3.0;
	}
	return (result);
}
