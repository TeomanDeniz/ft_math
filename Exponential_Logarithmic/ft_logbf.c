/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_logbf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 20:45:44 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
#    int ft_isnan(double);
#    int ft_isinf(double);
#  float ft_frexpf(float, int *);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

float
	ft_logbf(register float x)
{
	int	exponent;

	if (x == 0.0F)
		return ((-1.0F / 0.0F));
	if (ft_isnan(x))
		return (x);
	if (ft_isinf(x))
		return ((1.0F / 0.0F));
	ft_frexpf(x, &exponent);
	return ((float)exponent - 1.0F);
}
