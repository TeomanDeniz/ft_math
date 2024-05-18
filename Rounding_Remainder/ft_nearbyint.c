/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nearbyint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 00:35:30 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
# double ft_floor(double);
# double ft_ceil(double);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

double
	ft_nearbyint(register double x)
{
	double	floor_x;
	double	ceil_x;

	floor_x = ft_floor(x);
	ceil_x = ft_ceil(x);
	if ((x - floor_x) < (ceil_x - x))
		return (floor_x);
	return (ceil_x);
}
