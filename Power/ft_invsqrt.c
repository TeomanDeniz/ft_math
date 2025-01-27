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

/* ***************************** [v] UNIONS [v] ***************************** */
union u_static_cast
{
	double	as_double;
	long	as_long;
};
/* ***************************** [^] UNIONS [^] ***************************** */

double
	ft_invsqrt(register double x)
{
	union u_static_cast	demon;
	union u_static_cast	wtf;

	if (ft_isinf(x) || ft_isnan(x))
		return (x);
	if (x == 0.0)
		return (-(0.0 / 0.0));
	demon.as_double = x;
	wtf.as_long = demon.as_long;
	wtf.as_long = 0X5FE6EB50C7B537A9L - (wtf.as_long >> 1);
	demon.as_double = wtf.as_double;
	return (demon.as_double * \
		(1.5 - 0.5 * x * demon.as_double * demon.as_double));
}

/*
 * From: https://en.wikipedia.org/wiki/Fast_inverse_square_root
 */
