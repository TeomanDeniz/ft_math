/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_log.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 20:35:52 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
#    int ft_isinf(double);
#    int ft_isnan(double);
# double ft_fabs(double);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

/* *************************** [v] PROTOTYPES [v] *************************** */
extern __inline__ double	check_your_six(double x);
extern __inline__ double	log2_simplifier(double *x);
extern __inline__ double	two_or_bigger(double x, double result);
/* *************************** [^] PROTOTYPES [^] *************************** */

double
	ft_log(register double x)
{
	register double	calculator;
	register double	numerator;
	register double	denominator;
	register double	term;
	double			result;

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
	result *= 2.0;
	return (result);
}

extern __inline__ double
	two_or_bigger(double x, double result)
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
	result = 2.0 * result + __log2__;
	return (result);
}

extern __inline__ double
	log2_simplifier(double *x)
{
	register int	epsilon;

	epsilon = -1;
	while (++epsilon, *x >= 2.0)
		*x /= 2.0;
	return (epsilon * M_LN2);
}

extern __inline__ double
	check_your_six(double x)
{
	if (x < 0.0)
		return (0.0 / 0.0);
	if (x == 0.0)
		return (-1.0 / 0.0);
	return (x);
}
