/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remquof.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:53:17 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
#    int ft_isnan(double);
#    int ft_isinf(double);
#  float ft_fmodf(float, float);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

float
	ft_remquof(register float x, register float y, int *quotient)
{
	float	result;

	if (ft_isnan(y))
	{
		result = y;
		return (result);
	}
	if (ft_isnan(x))
	{
		result = x;
		return (result);
	}
	if (y == 0.0F || ft_isinf(x))
		return (0.0F / 0.0F);
	result = ft_fmodf(x, y);
	*quotient = (int)(x / y);
	return (result);
}
