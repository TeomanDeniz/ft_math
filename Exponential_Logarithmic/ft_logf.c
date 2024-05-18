/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_logf.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 20:35:52 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
# define M_LN2_F
#    int ft_isinf(double);
#    int ft_isnan(double);
#  float ft_fabsf(float);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

/* *************************** [v] PROTOTYPES [v] *************************** */
extern __inline__ float	check_your_six(float x);
extern __inline__ float	log2_simplifier(float *x);
extern __inline__ float	two_or_bigger(float x, register float result);
/* *************************** [^] PROTOTYPES [^] *************************** */

float
	ft_logf(register float x)
{
	register float	calculator;
	register float	numerator;
	register float	denominator;
	register float	term;
	float			result;

	if (x < 0.0F || x == 0.0F || ft_isinf(x) || ft_isnan(x))
		return (check_your_six(x));
	result = 0.0F;
	if (x >= 2.0F)
		return (two_or_bigger(x, result));
	numerator = (x - 1.0F) / (x + 1.0F);
	calculator = (numerator) * (numerator);
	denominator = 1.0F;
	term = numerator;
	while (ft_fabsf(term) > 1E-15)
	{
		result += term;
		numerator *= calculator;
		denominator += 2.0F;
		term = numerator / denominator;
	}
	result *= 2.0F;
	return (result);
}

extern __inline__ float
	log2_simplifier(float *x)
{
	int	epsilon;

	epsilon = -1;
	while (++epsilon, *x >= 2.0F)
		*x /= 2.0F;
	epsilon *= M_LN2_F;
	return (epsilon);
}

extern __inline__ float
	two_or_bigger(float x, float result)
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
	while (ft_fabsf(term) > 1E-15)
	{
		result += term;
		numerator *= calculator;
		denominator += 2.0F;
		term = numerator / denominator;
	}
	result = 2.0F * result + __log2__;
	return (result);
}

extern __inline__ float
	check_your_six(float x)
{
	if (x < 0.0F)
		return (0.0F / 0.0F);
	if (x == 0.0F)
		return (-1.0F / 0.0F);
	return (x);
}
