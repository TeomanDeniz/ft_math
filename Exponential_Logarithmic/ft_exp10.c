/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exp10.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:09:38 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/20 01:42:40 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

double
	ft_exp10(register double x)
{
	if (ft_isnan(x) || ft_isinf(x) == 1)
		return (x);
	if (ft_isinf(x))
		return (0.0);
	if (x == 0.0)
		return (1.0);
	return (ft_pow(10.0, x));
}
