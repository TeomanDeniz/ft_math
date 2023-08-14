/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remainderf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:29:31 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/19 22:09:32 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

float
	ft_remainderf(register float x, register float y)
{
	register float	quotient;
	register float	rounded_quotient;

	if (ft_isnan(x) || ft_isinf(y))
		return (x);
	if (ft_isnan(y))
		return (y);
	if (ft_isinf(x) || y == 0.0F)
		return (0.0F / 0.0F);
	quotient = (x / y);
	rounded_quotient = ft_roundf(quotient);
	return (x - rounded_quotient * y);
}
