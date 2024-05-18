/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_asinh.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:56:37 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
#    int ft_isinf(double);
#    int ft_isnan(double);
# double ft_log(double);
# double ft_sqrt(double);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

double
	ft_asinh(register double x)
{
	double	result;

	if (ft_isinf(x) || ft_isnan(x))
	{
		result = x;
		return (result);
	}
	result = ft_log(x + ft_sqrt(x * x + 1.0));
	return (result);
}
