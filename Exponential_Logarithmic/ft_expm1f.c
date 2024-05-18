/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_expm1f.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:24:06 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
#    int ft_isnan(double);
#    int ft_isinf(double);
#  float ft_fabsf(float);
#  float ft_expf(float);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

float
	ft_expm1f(register float x)
{
	float			result;
	register float	x_x;

	if (ft_isnan(x) || ft_isinf(x) || x == 0.0F)
	{
		result = x;
		return (result);
	}
	if (ft_isinf(x))
		return (-1.0F);
	if (ft_fabsf(x) > 1E-5)
		return (ft_expf(x) - 1.0F);
	x_x = x * x;
	result = x + x_x * 0.5F + \
		x_x * x * 0.16666666666666666F + x_x * x_x * 0.041666666666666664F;
	return (result);
}
