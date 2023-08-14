/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_modf.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 19:12:33 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/02 14:11:35 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

double
	ft_modf(register double x, double *integer)
{
	if (ft_isnan(x) || ft_isinf(x))
	{
		*integer = x;
		if (ft_isnan(x))
			return (x);
		return (0.0 * ft_isinf(x));
	}
	*integer = x - (double)(x - (long)x);
	return ((double)(x - (long)x));
}
