/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_expm1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:24:06 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
#    int ft_isnan(double);
#    int ft_isinf(double);
# double ft_fabs(double);
# double ft_exp(double);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

double
	ft_expm1(register double x)
{
	double			result;
	register double	x_x;

	if (ft_isnan(x) || ft_isinf(x) || x == 0.0)
	{
		result = x;
		return (result);
	}
	if (ft_isinf(x))
		return (-1.0);
	if (ft_fabs(x) > 1E-5)
		return (ft_exp(x) - 1.0);
	x_x = x * x;
	result = x + x_x * 0.5 + \
		x_x * x * 0.16666666666666666 + x_x * x_x * 0.041666666666666664;
	return (result);
}
