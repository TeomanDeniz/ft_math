/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cbrtf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 12:28:15 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
#    int ft_isinf(double);
#    int ft_isnan(double);
#  float ft_fabsf(float);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

float
	ft_cbrtf(register float x)
{
	register float	prev_result;
	float			result;

	if (x == 0.0F || x == -0.0F || ft_isinf(x) || ft_isnan(x))
	{
		result = x;
		return (result);
	}
	result = 1.0F;
	prev_result = 0.0F;
	while (ft_fabsf(result - prev_result) > 1E-15)
	{
		prev_result = result;
		result = (2.0F * result + x / (result * result)) / 3.0F;
	}
	return (result);
}
