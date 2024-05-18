/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copysign.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:49:33 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
#    int ft_signbit(double);
# double ft_fabs(double);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

double
	ft_copysign(register double x, register double y)
{
	if (y >= 0.0 || !ft_signbit(y))
		return (ft_fabs(x));
	return (ft_fabs(x) * -1.0);
}
