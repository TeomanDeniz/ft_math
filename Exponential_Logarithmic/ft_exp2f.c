/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exp2f.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 16:18:27 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
#    int ft_isinf(double);
#    int ft_isnan(double);
#  float ft_expf(float);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

#define LOG2_F 0.69314718055994528623F

float
	ft_exp2f(register float x)
{
	float	result;

	if (ft_isinf(x) || ft_isnan(x) == 1)
	{
		result = x;
		return (result);
	}
	if (ft_isinf(x))
		return (0.0F);
	result = ft_expf(x * LOG2_F);
	return (result);
}
