/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_acoshf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 16:01:28 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
#    int ft_isnan(double);
#    int ft_isinf(double);
#  float ft_logf(float);
#  float ft_sqrtf(float);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

float
	ft_acoshf(register float x)
{
	float	result;

	if (ft_isnan(x) || ft_isinf(x))
	{
		result = x;
		return (result);
	}
	if (x < 1.0F)
		return (0.0F / 0.0F);
	result = ft_logf(x + ft_sqrtf(x * x - 1.0F));
	return (result);
}
