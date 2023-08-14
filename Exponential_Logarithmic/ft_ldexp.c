/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ldexp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 13:29:41 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/19 21:05:42 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

double
	ft_ldexp(register double x, register int exponent)
{
	if (ft_isinf(x) || ft_isnan(x) || x == 0.0 || exponent == 0)
		return (x);
	if (exponent == (signed)0X80000000 || exponent == 0X7FFFFFFF)
		return (0.0);
	if (exponent + ((x / 2) + 1) >= 1025)
		return (1.0);
	return (x * ft_pow(2.0, exponent));
}
