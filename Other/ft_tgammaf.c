/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tgammaf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:21:31 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/19 21:49:32 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

/* PROTOTYPES */
static inline void	settings_filler(float *setting);
/* PROTOTYPES */

float
	ft_tgammaf(register float x)
{
	float			setting[20];
	register int	counter;
	register float	result;

	if (ft_isinf(x) == -1 || (x - (long)x == 0.0F))
		return (-(0.0F / 0.0F));
	if (ft_isinf(x) || ft_isnan(x))
		return (x);
	counter = 0;
	setting[0] = ft_sqrt(2.0F * M_PI_F);
	settings_filler(setting);
	result = setting[0];
	while (++counter, counter < 20)
		result += setting[counter] / (x + counter);
	result *= ft_expf(-(x + 20.0F)) * ft_pow(x + 20.0F, x + 0.5F);
	if (ft_isnan(result / x))
		return (0.0F * (((long)x % 2 == 0) * -1.0F));
	return (result / x);
}

static inline void
	settings_filler(float *setting)
{
	register float	factoriel;
	register int	counter;

	factoriel = 1.0F;
	counter = 0;
	while (++counter, counter < 20)
	{
		setting[counter] = ft_expf(20.0F - (float)counter) * \
			ft_powf(20.0F - (float)counter, \
			(float)counter - 0.5F) / (factoriel);
		factoriel *= (float)-counter;
	}
}

/*
 * Sorry but wtf
 *
 * Used from https://rosettacode.org/wiki/Gamma_function#C
 */
