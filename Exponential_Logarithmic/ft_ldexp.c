/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ldexp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 13:29:41 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
#    int ft_isinf(double);
#    int ft_isnan(double);
# double ft_pow(double, double);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

double
	ft_ldexp(double x, register long exponent)
{
	if (ft_isinf(x) || ft_isnan(x) || x == 0.0 || exponent == 0L)
		return (x);
	if (exponent == (signed)0X8000000000000000L || \
		exponent == 0X7FFFFFFFFFFFFFFFL)
		return (0.0);
	if (exponent + ((x / 2L) + 1L) >= 1025L)
		return (1.0);
	return (x * ft_pow(2.0, exponent));
}
