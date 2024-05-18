/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fmod.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 15:48:05 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
#    int ft_isinf(double);
# double ft_floor(double);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

double
	ft_fmod(double x, register double y)
{
	if (ft_isinf(x))
		return (-0.0 / 0.0);
	if (ft_isinf(y))
		return (x);
	x = (x) - (ft_floor(x / y)) * (y);
	return (x);
}
