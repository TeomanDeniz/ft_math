/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_expm1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:24:06 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/01 17:24:09 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

double
	ft_expm1(register double x)
{
	if (ft_isnan(x) || ft_isinf(x) == 1)
		return (x);
	if (ft_isinf(x))
		return (-1.0);
	if (x == 0.0)
		return (x);
	if (ft_fabs(x) > 1E-5)
		return (ft_exp(x) - 1.0);
	return (x + x * x * 0.5 + \
		x * x * x * 0.16666666666666666 + \
		x * x * x * x * 0.041666666666666664);
}
