/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copysignf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:49:33 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
#    int ft_signbit(double);
#  float ft_fabsf(float);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

float
	ft_copysignf(register float x, register float y)
{
	if (y >= 0.0F || !ft_signbit(y))
		return (ft_fabsf(x));
	return (ft_fabsf(x) * -1.0F);
}
