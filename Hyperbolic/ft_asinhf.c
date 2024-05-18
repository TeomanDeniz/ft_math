/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_asinhf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:56:37 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
#    int ft_isinf(double);
#    int ft_isnan(double);
#  float ft_logf(float);
#  float ft_sqrtf(float);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

float
	ft_asinhf(register float x)
{
	float	result;

	if (ft_isinf(x) || ft_isnan(x))
	{
		result = x;
		return (result);
	}
	result = ft_logf(x + ft_sqrtf(x * x + 1.0F));
	return (result);
}
