/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trunc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 14:13:40 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/02 14:13:43 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

double
	ft_trunc(register double x)
{
	double	integer;

	if (ft_isnan(x) || ft_isinf(x) || x == 0.0)
		return (x);
	ft_modf(x, &integer);
	return (integer);
}
