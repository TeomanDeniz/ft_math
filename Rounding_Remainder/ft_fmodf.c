/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fmodf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 15:48:05 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/19 22:08:23 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

float
	ft_fmodf(register float x, register float y)
{
	if (ft_isinf(x))
		return (-0.0F / 0.0F);
	if (ft_isinf(y))
		return (x);
	return ((x) - ((long)(x / y)) * (y));
}
