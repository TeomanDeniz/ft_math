/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atanf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 15:59:43 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/19 18:08:49 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../ft_math.h"

float
	ft_atan(register float x)
{
	register float	y;

	if (ft_isnan(x))
		return (x);
	if (x == 0.0F)
		return (0.0F);
	else if (x > 0.0F)
	{
		if (x > 1.0F)
			return (M_PI_F	/ 2.0F - ft_atanf(1.0F / x));
		else
		{
			y = (x * x);
			return (x * (1.0F - \
				y * (0.33333333333333333F - y * (0.20000000000000000F - \
				y * (0.14285714285714285F - y * (0.11111111111111111F - \
				y * (0.09090909090909091F - y * (0.07692307692307693F) \
				)))))));
		}
	}
	else
		return (-ft_atanf(-x));
}
