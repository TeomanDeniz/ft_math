/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_frexpf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 20:39:47 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
#    int ft_isnan(double);
#    int ft_isinf(double);
#  float ft_fabsf(float);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

float
	ft_frexpf(float x, int *exponent)
{
	register int	sign;
	register int	epsilon;

	if (ft_isnan(x) || ft_isinf(x))
		return (x);
	sign = 1;
	epsilon = -1;
	if (x < 0.0F)
		sign = -1;
	if (x == 0.0F)
	{
		*exponent = 0;
		return (0.0F);
	}
	x = ft_fabsf(x);
	while (++epsilon, x >= 1.0F)
		x /= 2.0F;
	epsilon++;
	while (--epsilon, x < 0.5F)
		x *= 2.0F;
	*exponent = sign * epsilon;
	x *= (float)sign;
	return (x);
}
