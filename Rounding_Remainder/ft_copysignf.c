/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copysignf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:49:33 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/20 03:24:34 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

float
	ft_copysignf(register float x, register float y)
{
	if (y >= 0.0F || !ft_signbit(y))
		return (ft_fabsf(x));
	return (ft_fabsf(x) * -1.0F);
}
