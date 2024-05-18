/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tanh.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:26:29 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
#    int ft_isnan(double);
#    int ft_isinf(double);
# double ft_exp(double);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

double
	ft_tanh(register double x)
{
	double	result;

	if (ft_isnan(x))
	{
		result = x;
		return (result);
	}
	if (ft_isinf(x))
	{
		result = 1.0 * ft_isinf(x);
		return (result);
	}
	result = (ft_exp(x) - ft_exp(-x)) / (ft_exp(x) + ft_exp(-x));
	return (result);
}
