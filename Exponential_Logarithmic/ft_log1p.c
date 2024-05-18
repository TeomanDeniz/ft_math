/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_log1p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 14:26:58 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
#    int ft_isnan(double);
#    int ft_isinf(double);
# double ft_log(double);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

double
	ft_log1p(register double x)
{
	double			result;
	register double	y;

	if (ft_isnan(x) || ft_isinf(x))
	{
		result = x;
		return (result);
	}
	if (x == -1.0)
		return (-1.0 / 0.0);
	if (x < -1.0)
		return (-0.0 / 0.0);
	if (x < 1E-15)
	{
		result = x - 0.5 * x * x;
		return (result);
	}
	y = 1.0 + x;
	result = ft_log(y) - ((y - 1.0) - x) / y;
	return (result);
}
