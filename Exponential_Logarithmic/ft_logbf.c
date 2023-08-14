/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_logbf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 20:45:44 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/19 21:00:45 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

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
	return ((float)exponent - 1);
}
