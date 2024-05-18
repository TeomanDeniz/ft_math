/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_modf.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 19:12:33 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
#    int ft_isnan(double);
#    int ft_isinf(double);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

double
	ft_modf(double x, double *integer)
{
	if (ft_isnan(x) || ft_isinf(x))
	{
		*integer = x;
		if (ft_isnan(x))
			return (x);
		return (0.0 * ft_isinf(x));
	}
	*integer = x - (double)(x - (long)x);
	return ((double)(x - (long)x));
}
