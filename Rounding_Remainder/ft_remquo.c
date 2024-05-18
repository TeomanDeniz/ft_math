/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remquo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:53:17 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
#    int ft_isnan(double);
#    int ft_isinf(double);
# double ft_fmod(double, double);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

double
	ft_remquo(register double x, register double y, int *quotient)
{
	double	result;

	if (ft_isnan(y))
	{
		result = y;
		return (result);
	}
	if (ft_isnan(x))
	{
		result = x;
		return (result);
	}
	if (y == 0.0 || ft_isinf(x))
		return (0.0 / 0.0);
	result = ft_fmod(x, y);
	*quotient = (int)(x / y);
	return (result);
}
