/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_asinf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 17:35:15 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
#    int ft_isnan(double);
#  float ft_atan2f(float, float);
#  float ft_sqrtf(float);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

float
	ft_asinf(register float x)
{
	if (ft_isnan(x))
		return (x);
	if (ft_isnan(ft_atan2f(x, ft_sqrtf(1.0F - (x * x)))))
		return (-(0.0F / 0.0F));
	return (ft_atan2f(x, ft_sqrtf(1.0F - (x * x))));
}
