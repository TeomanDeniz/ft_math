/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_log2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 18:08:32 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
# define M_LN2
#    int ft_isnan(double);
#    int ft_isinf(double);
# double ft_log(double);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

double
	ft_log2(register double x)
{
	if (ft_isnan(x) || ft_isinf(x))
		return (x);
	if (x == 0.0)
		return ((-1.0 / 0.0));
	if (x < 0.0)
		return ((0.0 / 0.0));
	return (ft_log(x) / M_LN2);
}
