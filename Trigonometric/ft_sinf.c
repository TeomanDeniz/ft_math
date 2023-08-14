/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sinf.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 11:38:23 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/20 03:34:48 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

float
	ft_sinf(register float x)
{
	register float			result;
	register float			term;
	register unsigned int	epsilon;

	if (ft_isinf(x))
		return (0.0F / 0.0F);
	x = ft_fmodf(x, 2.0F * M_PI_F);
	epsilon = 3;
	term = x;
	result = x;
	while (ft_fabsf(term) > 1E-15)
	{
		term = -term * x * x / (epsilon * (epsilon - 1.0F));
		result += term;
		epsilon += 2;
	}
	return (result);
}
