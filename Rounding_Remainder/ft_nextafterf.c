/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nextafterf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 18:58:04 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
# define FLT_MAX
# define FLT_MIN
#    int ft_isnan(double);
#    int ft_isinf(double);
#  float ft_copysignf(float, float);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

float
	ft_nextafterf(float x, float y)
{
	if (ft_isnan(x) || ft_isnan(y))
		return (x + y);
	if (ft_isinf(y) || y <= 0.0F)
		return (x);
	if (x == y)
		return (y);
	if (ft_isinf(x))
		return (ft_copysignf(FLT_MAX, x));
	if (x == 0.0F)
		return (ft_copysignf(FLT_MIN, y));
	if ((y - x) > 0.0F)
		return (x);
	return (-x);
}
