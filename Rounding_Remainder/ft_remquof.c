/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remquof.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:53:17 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/19 22:20:20 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

float
	ft_remquof(register float x, register float y, int *quotient)
{
	register float	result;

	if (ft_isnan(y))
		return (y);
	if (ft_isnan(x))
		return (x);
	if (y == 0.0F || ft_isinf(x))
		return (0.0F / 0.0F);
	result = ft_fmodf(x, y);
	*quotient = (int)(x / y);
	return (result);
}
