/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_roundf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 14:37:55 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/19 22:05:56 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

float
	ft_roundf(register float x)
{
	float			intpart;
	register float	fracpart;

	if (ft_isnan(x) || ft_isinf(x) || x == 0.0F)
		return (x);
	fracpart = ft_modff(x, &intpart);
	if (x > 0.0F)
	{
		if (fracpart >= 0.5F)
			return (intpart + 1.0F);
		return (intpart);
	}
	if (fracpart <= -0.5F)
		return (intpart - 1.0F);
	return (intpart);
}
