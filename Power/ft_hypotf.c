/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hypotf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 12:38:27 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
#    int ft_isinf(double);
#    int ft_isnan(double);
#  float ft_sqrtf(float);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

float
	ft_hypotf(float p, float b)
{
	if (ft_isinf(p) || ft_isinf(b))
		return (1.0F / 0.0F);
	if (ft_isnan(p))
		return (p);
	if (ft_isnan(b))
		return (b);
	if (p == 0.0F && b == 0.0F)
		return (0.0F);
	return (ft_sqrtf((p * p) + (b * b)));
}
