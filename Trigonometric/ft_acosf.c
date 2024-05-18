/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_acosf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:18:03 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
#  float ft_fabsf(float);
#  float ft_atan2f(float, float);
#  float ft_sqrtf(float);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

float
	ft_acosf(register float x)
{
	if (x > 1.0F || x < -1.0F)
		return (0.0F / 0.0F);
	if (x == 1.0F)
		return (0.0F);
	return (ft_fabsf(ft_atan2f(ft_sqrtf(1.0F - (x * x)), x)));
}
