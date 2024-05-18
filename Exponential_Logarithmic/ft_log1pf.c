/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_log1pf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 14:26:58 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
#    int ft_isnan(double);
#    int ft_isinf(double);
#  float ft_logf(float);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

float
	ft_log1pf(register float x)
{
	float			result;
	register float	y;

	if (ft_isnan(x) || ft_isinf(x))
	{
		result = x;
		return (result);
	}
	if (x == -1.0F)
		return (-1.0F / 0.0F);
	if (x < -1.0F)
		return (-0.0F / 0.0F);
	if (x < 1E-15)
	{
		result = x - 0.5F * x * x;
		return (result);
	}
	y = 1.0F + x;
	result = ft_logf(y) - ((y - 1.0F) - x) / y;
	return (result);
}
