/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_logf.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 20:35:52 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/19 20:53:38 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../ft_math.h"

static inline float	check_your_six(register float x);
static inline float	log2_simplifier(float *x);
static inline float	two_or_bigger(float x, register float result);

float
	ft_logf(register float x)
{
	register float	calculator;
	register float	numerator;
	register float	denominator;
	register float	term;
	register float	result;

	if (x < 0.0F || x == 0.0F || ft_isinf(x) || ft_isnan(x))
		return (check_your_six(x));
	result = 0.0F;
	if (x >= 2.0F)
		return (two_or_bigger(x, result));
	numerator = (x - 1.0F) / (x + 1.0F);
	calculator = (numerator) * (numerator);
	denominator = 1.0F;
	term = numerator;
	while (ft_fabsf(term) > 1E-15F)
	{
		result += term;
		numerator *= calculator;
		denominator += 2.0F;
		term = numerator / denominator;
	}
	return (2.0F * result);
}

static inline float
	log2_simplifier(float *x)
{
	register int	epsilon;

	epsilon = -1;
	while (++epsilon, *x >= 2.0F)
		*x /= 2.0F;
	return (epsilon * M_LN2_F);
}

static inline float
	two_or_bigger(float x, register float result)
{
	register float	__log2__;
	register float	calculator;
	register float	numerator;
	register float	denominator;
	register float	term;

	__log2__ = log2_simplifier(&x);
	numerator = (x - 1.0F) / (x + 1.0F);
	calculator = (numerator) * (numerator);
	term = numerator;
	denominator = 1.0F;
	while (ft_fabs(term) > 1E-15F)
	{
		result += term;
		numerator *= calculator;
		denominator += 2.0F;
		term = numerator / denominator;
	}
	return (2.0F * result + __log2__);
}

static inline float
	check_your_six(register float x)
{
	if (x < 0.0F)
		return (0.0F / 0.0F);
	if (x == 0.0F)
		return (-1.0F / 0.0F);
	return (x);
}
