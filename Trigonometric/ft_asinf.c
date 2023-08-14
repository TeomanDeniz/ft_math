/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_asinf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 17:35:15 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/19 17:17:05 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

float
	ft_asinf(register float x)
{
	if (ft_isnan(x))
		return (x);
	if (ft_isnan(ft_atan2f(x, ft_sqrtf(1.0F - (x * x)))))
		return (-(0.0F / 0.0F));
	return (ft_atan2f(x, ft_sqrtf(1.0F - (x * x))));
}
