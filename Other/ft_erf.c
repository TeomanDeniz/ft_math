/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_erf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 09:50:19 by hdeniz            #+#    #+#             */
/*   Updated: 2024/06/02 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
#    int ft_isnan(double);
#    int ft_isinf(double);
# double ft_exp(double);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

double
	ft_erf(double x)
{
	register double	t;
	register double	sign;

	if (x == 0.0 || ft_isnan(x))
		return (x);
	if (ft_isinf(x) == 1)
		return (1.0);
	if (ft_isinf(x) == -1)
		return (-1.0);
	sign = 1.0;
	if (x < 0.0)
	{
		x = -x;
		sign = -1.0;
	}
	t = 1.0 / (1.0 + 0.3275911 * x);
	x = sign * (1.0 - (((((1.061405429 * t + -1.453152027) * t) + 1.421413741 \
		) * t + -0.284496736) * t + 0.254829592) * t * ft_exp(-x * x));
	return (x);
}
