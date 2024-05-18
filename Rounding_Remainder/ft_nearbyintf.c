/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nearbyintf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 00:35:30 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
#  float ft_floorf(float);
#  float ft_ceilf(float);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

float
	ft_nearbyintf(register float x)
{
	float	floorf_x;
	float	ceilf_x;

	floorf_x = ft_floorf(x);
	ceilf_x = ft_ceilf(x);
	if ((x - floorf_x) < (ceilf_x - x))
		return (floorf_x);
	return (ceilf_x);
}
