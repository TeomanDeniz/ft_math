/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_logb.c                                          :+:      :+:    :+:   */
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
# double ft_frexp(double, long *);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

double
	ft_logb(register double x)
{
	long	exponent;

	if (x == 0.0)
		return ((-1.0 / 0.0));
	if (ft_isnan(x))
		return (x);
	if (ft_isinf(x))
		return ((1.0 / 0.0));
	ft_frexp(x, &exponent);
	return ((double)exponent - 1.0);
}
