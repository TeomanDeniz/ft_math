/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_modff.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 19:12:33 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/19 21:01:35 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

float
	ft_modff(register float x, float *integer)
{
	if (ft_isnan(x) || ft_isinf(x))
	{
		*integer = x;
		if (ft_isnan(x))
			return (x);
		return (0.0F * ft_isinf(x));
	}
	*integer = x - (float)(x - (long)x);
	return ((float)(x - (long)x));
}
