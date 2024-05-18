/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_truncf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 14:13:40 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
#    int ft_isnan(double);
#    int ft_isinf(double);
#  float ft_modf(float, float *);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

float
	ft_truncf(register float x)
{
	float	integer;

	if (ft_isnan(x) || ft_isinf(x) || x == 0.0F)
	{
		integer = x;
		return (integer);
	}
	ft_modff(x, &integer);
	return (integer);
}
