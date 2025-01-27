/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_invsqrtf.c                                      :+:      :+:    :+:   */
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
	float	as_float;
	int		as_int;
};
/* ***************************** [^] UNIONS [^] ***************************** */

float
	ft_invsqrtf(register float x)
{
	union u_static_cast	demon;
	union u_static_cast	wtf;

	if (ft_isinf(x) || ft_isnan(x))
		return (x);
	if (x == 0.0F)
		return (-(0.0F / 0.0F));
	demon.as_float = x;
	wtf.as_int = demon.as_int;
	wtf.as_int = 0X5F3759DF - (wtf.as_int >> 1);
	demon.as_float = wtf.as_float;
	return (demon.as_float * \
		(1.5F - 0.5F * x * demon.as_float * demon.as_float));
}

/*
 * From: https://en.wikipedia.org/wiki/Fast_inverse_square_root
 */
