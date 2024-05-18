/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_roundf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 14:37:55 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
#    int ft_isnan(double);
#    int ft_isinf(double);
#  float ft_modff(float, float *);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

float
	ft_roundf(register float x)
{
	float			intpart;
	register float	fracpart;

	if (ft_isnan(x) || ft_isinf(x) || x == 0.0F)
		return (x);
	fracpart = ft_modff(x, &intpart);
	if (x > 0.0F)
	{
		if (fracpart >= 0.5F)
			return (intpart + 1.0F);
		return (intpart);
	}
	if (fracpart <= -0.5F)
		return (intpart - 1.0F);
	return (0.0F);
}
