/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_invsqrt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 20:11:16 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
#    int ft_isinf(double);
#    int ft_isnan(double);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

double
	ft_invsqrt(register double x)
{
	double	demon;
	long	wtf;

	if (ft_isinf(x) || ft_isnan(x))
		return (x);
	if (x == 0.0)
		return (-(0.0 / 0.0));
	demon = x;
	wtf = *(long *)&demon;
	wtf = 0X5FE6EB50C7B537A9L - (wtf >> 1);
	demon = *(double *)&wtf;
	return (demon * (1.5 - 0.5 * x * demon * demon));
}

/*
 * From: https://en.wikipedia.org/wiki/Fast_inverse_square_root
 */
