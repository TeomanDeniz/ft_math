/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atanh.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 16:07:37 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/01 16:07:38 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

double
	ft_atanh(register double x)
{
	if (!(ft_fabs(x) >= 1.0))
		return (0.5 * ft_log((1.0 + x) / (1.0 - x)));
	if (x == 1.0)
		return (1.0 / 0.0);
	if (x == -1.0)
		return (-1.0 / 0.0);
	return (0.0 / 0.0);
}
