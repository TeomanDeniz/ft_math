/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remainder.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:29:31 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/02 15:29:32 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

double
	ft_remainder(register double x, register double y)
{
	register double	quotient;
	register double	rounded_quotient;

	if (ft_isnan(x) || ft_isinf(y))
		return (x);
	if (ft_isnan(y))
		return (y);
	if (ft_isinf(x) || y == 0.0)
		return (0.0 / 0.0);
	quotient = (x / y);
	rounded_quotient = ft_round(quotient);
	return (x - rounded_quotient * y);
}
