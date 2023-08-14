/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tanh.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:26:29 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/01 12:26:30 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

double
	ft_tanh(register double x)
{
	if (ft_isnan(x))
		return (x);
	if (ft_isinf(x))
		return (1.0 * ft_isinf(x));
	return ((ft_exp(x) - ft_exp(-x)) / (ft_exp(x) + ft_exp(-x)));
}
