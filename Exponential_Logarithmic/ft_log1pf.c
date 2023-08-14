/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_log1pf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 14:26:58 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/20 03:35:59 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

float
	ft_log1pf(register float x)
{
	register float	y;

	if (ft_isnan(x) || ft_isinf(x))
		return (x);
	if (x == -1.0F)
		return (-1.0F / 0.0F);
	if (x < -1.0F)
		return (-0.0F / 0.0F);
	if (x < 1E-15)
		return (x - 0.5F * x * x);
	y = 1.0F + x;
	return (ft_logf(y) - ((y - 1.0F) - x) / y);
}
