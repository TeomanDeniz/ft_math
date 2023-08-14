/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_floorf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 16:04:12 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/19 22:04:16 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

float
	ft_floorf(register float x)
{
	if (ft_isnan(x) || ft_isinf(x))
		return (x);
	if (x < 0.0F)
		return ((long)x - 1.0F);
	return ((long)x);
}
