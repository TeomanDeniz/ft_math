/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lgammaf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 23:59:08 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/19 21:43:09 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

float
	ft_lgammaf(register float x)
{
	if (ft_isnan(x))
		return (x);
	if (ft_isinf(x) || x == 0.0F || (x < 0.0F && (x - (long)x == 0.0F)))
		return (1.0F / 0.0F);
	if (x == 1.0F || x == 2.0F)
		return (0.0F);
	if (x >= 3.0F && (x - (long)x == 0.0F))
		x += 0.00000000001F;
	return (ft_logf(ft_fabsf(ft_tgammaf(x))));
}
