/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_erff.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 09:50:19 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/20 03:23:21 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

float
	ft_erff(register float x)
{
	register float	t;
	register float	y;

	if (x == 0.0F || ft_isnan(x))
		return (x);
	if (ft_isinf(x) == 1)
		return (1.0F);
	if (ft_isinf(x) == -1)
		return (-1.0F);
	y = 1.0F;
	if (x < 0.0F)
	{
		x = -x;
		y = -1.0F;
	}
	t = 1.0F / (1.0F + 0.3275911F * x);
	return (y * (1.0F - (((((1.061405429F * t + -1.453152027F) * t) + \
		1.421413741F) * t + -0.284496736F) * t + 0.254829592F) * t * \
		ft_expf(-x * x)));
}
