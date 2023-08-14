/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_logb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 20:45:44 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/01 20:45:45 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

double
	ft_logb(register double x)
{
	int	exponent;

	if (x == 0.0)
		return ((-1.0 / 0.0));
	if (ft_isnan(x))
		return (x);
	if (ft_isinf(x))
		return ((1.0 / 0.0));
	ft_frexp(x, &exponent);
	return ((double)exponent - 1);
}
