/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lgammaf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 23:59:08 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
#    int ft_isnan(double);
#    int ft_isinf(double);
#  float ft_logf(float);
#  float ft_fabsf(float);
#  float ft_tgammaf(float);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

float
	ft_lgammaf(float x)
{
	if (ft_isnan(x))
		return (x);
	if (ft_isinf(x) || x == 0.0F || \
		(x < 0.0F && ((float)((float)x - (int)x) == 0.0F)))
		return (1.0F / 0.0F);
	if (x == 1.0F || x == 2.0F)
		return (0.0F);
	if (x >= 3.0F && ((float)((float)x - (int)x) == 0.0F))
		x += 0.00000000001F;
	return (ft_logf(ft_fabsf(ft_tgammaf(x))));
}
