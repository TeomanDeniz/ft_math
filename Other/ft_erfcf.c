/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_erfcf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 19:50:19 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/19 21:40:21 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

float
	ft_erfcf(register float x)
{
	register float	result;
	register float	x_abs;
	register float	y;

	if (x == 0.0F)
		return (1.0F);
	if (ft_isnan(x))
		return (x);
	if (ft_isinf(x) == 1)
		return (0.0F);
	if (ft_isinf(x) == -1)
		return (2.0F);
	x_abs = ft_fabsf(x);
	y = 1.0F / (1.0F + 0.5F * x_abs);
	result = y * ft_expf(-x_abs * x_abs - 1.26551223F + y * (1.00002368F + \
		y * (0.37409196F + y * (0.09678418F + y * (-0.18628806F + \
		y * (0.27886807F + y * (-1.13520398F + y * (1.48851587F + \
		y * (-0.82215223F + y * 0.17087277F)))))))));
	if (x >= 0.0F)
		return (result);
	return (2.0F - result);
}
