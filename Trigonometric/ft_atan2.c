/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atan2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:04:12 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
# define M_PI_2
# define M_PI_4
#    int ft_isnan(double);
#    int ft_isinf(double);
# double ft_atan(double);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

double
	ft_atan2(register double y, register double x)
{
	if (ft_isnan(x) || ft_isnan(y))
		return (0.0 / 0.0);
	if (x == 0.0)
	{
		if (y > 0.0)
			return (M_PI_2);
		if (y < 0.0)
			return (-M_PI_2);
		return (0.0);
	}
	if (!(ft_isinf(y) && ft_isinf(x)))
		return (ft_atan(y / x));
	if (x > 0.0)
	{
		if (y > 0.0)
			return (M_PI_4);
		return (-M_PI_4);
	}
	if (y > 0.0)
		return (3.0 * M_PI_4);
	return (-3.0 * M_PI_4);
}
