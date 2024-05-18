/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ceil.c                                          :+:      :+:    :+:   */
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
# double ft_trunc(double);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

double
	ft_ceil(double x)
{
	if (ft_isnan(x) || ft_isinf(x) || x == ft_trunc(x))
		return (x);
	if (x > 0.0)
		return (ft_trunc(x) + 1.0);
	return (ft_trunc(x));
}
