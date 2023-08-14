/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exp2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 16:18:27 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/01 16:18:28 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

double
	ft_exp2(register double x)
{
	if (ft_isinf(x) == 1 || ft_isnan(x))
		return (x);
	if (ft_isinf(x))
		return (0.0);
	return (ft_exp(x * ft_log(2.0)));
}
