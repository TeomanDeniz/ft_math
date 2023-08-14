/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ldexpf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 13:29:41 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/19 21:03:42 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

float
	ft_ldexpf(register float x, register int exponent)
{
	if (ft_isinf(x) || ft_isnan(x) || x == 0.0F || exponent == 0)
		return (x);
	if (exponent == (signed)0X80000000 || exponent == 0X7FFFFFFF)
		return (0.0F);
	if (exponent + ((x / 2) + 1) >= 1025)
		return (1.0F);
	return (x * ft_powf(2.0F, exponent));
}
