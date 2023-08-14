/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_asin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 17:35:15 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/26 17:35:16 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

/* Thanks to "https://github.com/sleepy-monax" for noticing me about
 * functon names are not same with in order.
 */

double
	ft_asin(register double x)
{
	if (ft_isnan(x))
		return (x);
	if (ft_isnan(ft_atan2(x, ft_sqrt(1.0 - (x * x)))))
		return (-(0.0 / 0.0));
	return (ft_atan2(x, ft_sqrt(1.0 - (x * x))));
}
