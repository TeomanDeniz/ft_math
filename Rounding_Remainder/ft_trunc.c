/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trunc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 14:13:40 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
#    int ft_isnan(double);
#    int ft_isinf(double);
# double ft_modf(double, double *);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

double
	ft_trunc(register double x)
{
	double	integer;

	if (ft_isnan(x) || ft_isinf(x) || x == 0.0)
	{
		integer = x;
		return (integer);
	}
	ft_modf(x, &integer);
	return (integer);
}
