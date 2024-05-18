/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exp10f.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:09:38 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
#    int ft_isnan(double);
#    int ft_isinf(double);
#  float ft_powf(float, float);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

float
	ft_exp10f(register float x)
{
	float	result;

	if (ft_isnan(x) || ft_isinf(x) == 1)
	{
		result = x;
		return (result);
	}
	if (ft_isinf(x))
		return (0.0F);
	if (x == 0.0F)
		return (1.0F);
	result = ft_powf(10.0F, x);
	return (result);
}
