/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tgamma.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:21:31 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/08 01:39:32 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../ft_math.h"

static inline void
	settings_filler(double *setting)
{
	register double	factoriel;
	register int	counter;

	factoriel = 1.0;
	counter = 0;
	while (++counter, counter < 20)
	{
		setting[counter] = ft_exp(20 - counter) * \
			ft_pow(20 - counter, counter - 0.5) / (factoriel);
		factoriel *= -counter;
	}
}

double
	ft_tgamma(register double x)
{
	double			setting[20];
	register int	counter;
	register double	result;

	if (ft_isinf(x) == -1 || (x - (long long)x == 0))
		return (-(0.0 / 0.0));
	if (ft_isinf(x) || ft_isnan(x))
		return (x);
	counter = 0;
	setting[0] = ft_sqrt(2.0 * M_PI);
	settings_filler(setting);
	result = setting[0];
	while (++counter, counter < 20)
		result += setting[counter] / (x + counter);
	result *= ft_exp(-(x + 20)) * ft_pow(x + 20, x + 0.5);
	if (ft_isnan(result / x))
		return (0.0 * (((long long)x % 2 == 0) * -1));
	return (result / x);
}

/*
 * Sorry but wtf
 *
 * Used from https://rosettacode.org/wiki/Gamma_function#C
 */
