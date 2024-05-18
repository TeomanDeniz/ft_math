/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_acosh.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 16:01:28 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
#    int ft_isnan(double);
#    int ft_isinf(double);
# double ft_log(double);
# double ft_sqrt(double);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

double
	ft_acosh(register double x)
{
	double	result;

	if (ft_isnan(x) || ft_isinf(x))
	{
		result = x;
		return (result);
	}
	if (x < 1.0)
		return (0.0 / 0.0);
	result = ft_log(x + ft_sqrt(x * x - 1.0));
	return (result);
}
