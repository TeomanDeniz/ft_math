/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remquo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:53:17 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/02 15:53:20 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

double
	ft_remquo(register double x, register double y, int *quotient)
{
	register double	result;

	if (ft_isnan(y))
		return (y);
	if (ft_isnan(x))
		return (x);
	if (y == 0.0 || ft_isinf(x))
		return (0.0 / 0.0);
	result = ft_fmod(x, y);
	*quotient = (int)(x / y);
	return (result);
}
