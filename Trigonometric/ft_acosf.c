/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_acosf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:18:03 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/19 17:17:14 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

float
	ft_acosf(register float x)
{
	if (x > 1.0F || x < -1.0F)
		return (0.0F / 0.0F);
	if (x == 1.0F)
		return (0.0F);
	return (ft_fabsf(ft_atan2f(ft_sqrtf(1.0F - (x * x)), x)));
}
