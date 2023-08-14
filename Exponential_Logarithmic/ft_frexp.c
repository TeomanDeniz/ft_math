/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_frexp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 20:39:47 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/19 21:07:49 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

double
	ft_frexp(register double x, int *exponent)
{
	register int	sign;
	register int	epsilon;

	if (ft_isnan(x) || ft_isinf(x))
		return (x);
	sign = 1;
	epsilon = -1;
	if (x < 0.0)
		sign = -1;
	if (x == 0.0)
	{
		*exponent = 0;
		return (0.0);
	}
	x = ft_fabs(x);
	while (++epsilon, x >= 1.0)
		x /= 2.0;
	epsilon++;
	while (--epsilon, x < 0.5)
		x *= 2.0;
	*exponent = sign * epsilon;
	return (sign * x);
}
