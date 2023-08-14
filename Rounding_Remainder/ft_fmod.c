/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fmod.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 15:48:05 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/23 15:48:23 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

double
	ft_fmod(register double x, register double y)
{
	if (ft_isinf(x))
		return (-0.0 / 0.0);
	if (ft_isinf(y))
		return (x);
	return ((x) - ((long)(x / y)) * (y));
}
