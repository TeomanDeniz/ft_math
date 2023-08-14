/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nearbyint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 00:35:30 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/20 00:36:23 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

double
	ft_nearbyint(register double x)
{
	register double	floor_x;
	register double	ceil_x;

	floor_x = ft_floor(x);
	ceil_x = ft_ceil(x);
	if ((x - floor_x) < (ceil_x - x))
		return (floor_x);
	return (ceil_x);
}
