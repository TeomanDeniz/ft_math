/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fabs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 20:31:50 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
#    int ft_isnan(double);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

double
	ft_fabs(double x)
{
	if (ft_isnan(x))
		return (-(0.0 / 0.0));
	if (x < 0.0)
		return (x * -1.0);
	return (x);
}
