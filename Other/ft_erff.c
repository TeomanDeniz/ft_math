/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_erff.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 09:50:19 by hdeniz            #+#    #+#             */
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

float
	ft_erff(float x)
{
	register float	t;
	register float	sign;

	if (x == 0.0F || ft_isnan(x))
		return (x);
	if (ft_isinf(x) == 1)
		return (1.0F);
	if (ft_isinf(x) == -1)
		return (-1.0F);
	sign = 1.0F;
	if (x < 0.0F)
	{
		x = -x;
		sign = -1.0F;
	}
	t = 1.0F / (1.0F + 0.3275911F * x);
	x = sign * (1.0F - (((((1.061405429F * t + -1.453152027F) * t) + \
		1.421413741F) * t + -0.284496736F) * t + 0.254829592F) * t * \
		ft_expf(-x * x))
	return (x);
}
