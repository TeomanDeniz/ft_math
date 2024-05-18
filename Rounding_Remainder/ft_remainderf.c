/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remainderf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:29:31 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
#    int ft_isnan(double);
#    int ft_isinf(double);
#  float ft_roundf(float);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

float
	ft_remainderf(float x, float y)
{
	register float	quotient;
	register float	rounded_quotient;

	if (ft_isnan(x) || ft_isinf(y))
		return (x);
	if (ft_isnan(y))
		return (y);
	if (ft_isinf(x) || y == 0.0F)
		return (0.0F / 0.0F);
	quotient = (x / y);
	rounded_quotient = ft_roundf(quotient);
	return (x - rounded_quotient * y);
}
