/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_log.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 20:35:52 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/19 20:55:38 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

/* PROTOTYPES */
static inline double	check_your_six(register double x);
static inline double	log2_simplifier(double *x);
static inline double	two_or_bigger(double x, register double result);
/* PROTOTYPES */

double
	ft_log(register double x)
{
	register double	calculator;
	register double	numerator;
	register double	denominator;
	register double	term;
	register double	result;

	if (x < 0.0 || x == 0.0 || ft_isinf(x) || ft_isnan(x))
		return (check_your_six(x));
	result = 0.0;
	if (x >= 2.0)
		return (two_or_bigger(x, result));
	numerator = (x - 1.0) / (x + 1.0);
	calculator = (numerator) * (numerator);
	denominator = 1.0;
	term = numerator;
	while (ft_fabs(term) > 1E-15)
	{
		result += term;
		numerator *= calculator;
		denominator += 2.0;
		term = numerator / denominator;
	}
	return (2.0 * result);
}

static inline double
	two_or_bigger(double x, register double result)
{
	register double	__log2__;
	register double	calculator;
	register double	numerator;
	register double	denominator;
	register double	term;

	__log2__ = log2_simplifier(&x);
	numerator = (x - 1.0) / (x + 1.0);
	calculator = (numerator) * (numerator);
	term = numerator;
	denominator = 1.0;
	while (ft_fabs(term) > 1E-15)
	{
		result += term;
		numerator *= calculator;
		denominator += 2.0;
		term = numerator / denominator;
	}
	return (2.0 * result + __log2__);
}

static inline double
	log2_simplifier(double *x)
{
	register int	epsilon;

	epsilon = -1;
	while (++epsilon, *x >= 2.0)
		*x /= 2.0;
	return (epsilon * M_LN2);
}

static inline double
	check_your_six(register double x)
{
	if (x < 0.0)
		return (0.0 / 0.0);
	if (x == 0.0)
		return (-1.0 / 0.0);
	return (x);
}
