/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_modff.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 19:12:33 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
#    int ft_isnan(double);
#    int ft_isinf(double);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

float
	ft_modff(float x, float *integer)
{
	if (ft_isnan(x) || ft_isinf(x))
	{
		*integer = x;
		if (ft_isnan(x))
			return (x);
		return (0.0F * ft_isinf(x));
	}
	*integer = x - (float)(x - (long)x);
	return ((float)(x - (long)x));
}
