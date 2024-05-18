/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ceilf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 14:28:47 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
#    int ft_isnan(double);
#    int ft_isinf(double);
#  float ft_truncf(float);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

float
	ft_ceilf(float x)
{
	if (ft_isnan(x) || ft_isinf(x) || x == ft_truncf(x))
		return (x);
	if (x > 0.0F)
		return (ft_truncf(x) + 1.0F);
	return (ft_truncf(x));
}
