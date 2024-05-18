/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_acos.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:18:03 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
# double ft_fabs(double);
# double ft_atan2(double, double);
# double ft_sqrt(double);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

double
	ft_acos(register double x)
{
	if (x > 1.0 || x < -1.0)
		return (0.0 / 0.0);
	if (x == 1.0)
		return (0.0);
	return (ft_fabs(ft_atan2(ft_sqrt(1.0F - (x * x)), x)));
}
