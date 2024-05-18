/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_asin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 17:35:15 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
#    int ft_isnan(double);
# double ft_atan2(double, double);
# double ft_sqrt(double);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

/*
 * Thanks to "https://github.com/sleepy-monax" for noticing me about
 * functon names are not same with in order.
 */

double
	ft_asin(double x)
{
	if (ft_isnan(x))
		return (x);
	if (ft_isnan(ft_atan2(x, ft_sqrt(1.0 - (x * x)))))
		return (-(0.0 / 0.0));
	return (ft_atan2(x, ft_sqrt(1.0 - (x * x))));
}
