/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ilogb.c                                         :+:      :+:    :+:   */
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
# double ft_floor(double);
# double ft_log2(double);
# double ft_fabs(double);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

int
	ft_ilogb(register double x)
{
	if (ft_isnan(x) || x == 0.0)
		return (0X80000000);
	if (ft_isinf(x))
		return (0X7FFFFFFF);
	return ((int)ft_floor(ft_log2(ft_fabs(x))));
}
