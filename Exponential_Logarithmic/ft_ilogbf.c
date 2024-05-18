/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ilogbf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 20:17:46 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
#    int ft_isnan(double);
#    int ft_isinf(double);
#  float ft_floorf(float);
#  float ft_log2f(float);
#  float ft_fabsf(float);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

int
	ft_ilogbf(register float x)
{
	if (ft_isnan(x) || x == 0.0F)
		return (0X80000000);
	if (ft_isinf(x))
		return (0X7FFFFFFF);
	return ((int)ft_floorf(ft_log2f(ft_fabsf(x))));
}
