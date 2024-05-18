/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fmodf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 15:48:05 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
#    int ft_isinf(double);
#  float ft_floorf(float);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

float
	ft_fmodf(float x, register float y)
{
	if (ft_isinf(x))
		return (-0.0F / 0.0F);
	if (ft_isinf(y))
		return (x);
	x = (x) - (ft_floorf(x / y)) * (y);
	return (x);
}
