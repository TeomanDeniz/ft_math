/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hypotf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 12:38:27 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/19 21:17:29 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

float
	ft_hypotf(register float p, register float b)
{
	if (ft_isinf(p) || ft_isinf(b))
		return (1.0F / 0.0F);
	if (ft_isnan(p))
		return (p);
	if (ft_isnan(b))
		return (b);
	if (p == 0.0F && b == 0.0F)
		return (0.0F);
	return (ft_sqrtf((p * p) + (b * b)));
}
