/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exp10.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:09:38 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
#    int ft_isnan(double);
#    int ft_isinf(double);
# double ft_pow(double, double);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

double
	ft_exp10(register double x)
{
	float	result;

	if (ft_isnan(x) || ft_isinf(x) == 1)
	{
		result = x;
		return (result);
	}
	if (ft_isinf(x))
		return (0.0);
	if (x == 0.0)
		return (1.0);
	result = ft_pow(10.0, x);
	return (result);
}
