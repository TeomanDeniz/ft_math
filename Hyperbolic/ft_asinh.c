/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_asinh.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:56:37 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/01 15:56:38 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

double
	ft_asinh(register double x)
{
	if (ft_isinf(x) || ft_isnan(x))
		return (x);
	return (ft_log(x + ft_sqrt(x * x + 1.0)));
}
