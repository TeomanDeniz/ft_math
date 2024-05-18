/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atan2f.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:04:12 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
# define M_PI_2_F
# define M_PI_4_F
#    int ft_isnan(double);
#    int ft_isinf(double);
#  float ft_atanf(float);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

float
	ft_atan2f(register float y, register float x)
{
	if (ft_isnan(x) || ft_isnan(y))
		return (0.0F / 0.0F);
	if (x == 0.0F)
	{
		if (y > 0.0F)
			return (M_PI_2_F);
		if (y < 0.0F)
			return (-M_PI_2_F);
		return (0.0F);
	}
	if (!(ft_isinf(y) && ft_isinf(x)))
		return (ft_atanf(y / x));
	if (x > 0.0F)
	{
		if (y > 0.0F)
			return (M_PI_4_F);
		return (-M_PI_4);
	}
	if (y > 0.0F)
		return (3.0F * M_PI_4_F);
	return (-3.0F * M_PI_4_F);
}
