/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_invsqrtf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 20:11:16 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/19 21:33:30 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

float
	ft_invsqrtf(register float x)
{
	float	demon;
	long	wtf;

	if (ft_isinf(x) || ft_isnan(x))
		return (x);
	if (x == 0.0F)
		return (-(0.0F / 0.0F));
	demon = x;
	wtf = *(long *)&demon;
	wtf = 0X5F3759DF - (wtf >> 1);
	demon = *(float *)&wtf;
	return (demon * (1.5F - 0.5F * x * demon * demon));
}

/*
 * From: https://en.wikipedia.org/wiki/Fast_inverse_square_root
 */
