/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nearbyintf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 00:35:30 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/20 00:37:23 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

float
	ft_nearbyintf(register float x)
{
	register float	floorf_x;
	register float	ceilf_x;

	floorf_x = ft_floorf(x);
	ceilf_x = ft_ceilf(x);
	if ((x - floorf_x) < (ceilf_x - x))
		return (floorf_x);
	return (ceilf_x);
}
