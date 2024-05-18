/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cbrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 12:28:15 by hdeniz            #+#    #+#             */
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

double
	ft_cbrt(register double x)
{
	register double	prev_result;
	double			result;

	if (x == 0.0 || x == -0.0 || ft_isinf(x) || ft_isnan(x))
	{
		result = x;
		return (result);
	}
	result = 1.0;
	prev_result = 0.0;
	while (ft_fabs(result - prev_result) > 1E-15)
	{
		prev_result = result;
		result = (2.0 * result + x / (result * result)) / 3.0;
	}
	return (result);
}
