/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cosf.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 11:38:23 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/20 03:33:34 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

float
	ft_cosf(register float x)
{
	register float			result;
	register float			term;
	register unsigned int	epsilon;

	if (ft_isinf(x))
		return (0.0F / 0.0F);
	result = 1.0F;
	term = 1.0F;
	epsilon = 0;
	x = ft_fmodf(x, 2.0F * M_PI_F);
	while (++epsilon, ft_fabsf(term) > 1E-15)
	{
		term = -term * x * x / (2.0F * epsilon - 1.0F) / (2.0F * epsilon);
		result += term;
	}
	return (result);
}
