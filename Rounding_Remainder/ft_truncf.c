/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_truncf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 14:13:40 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/19 22:07:43 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

float
	ft_truncf(register float x)
{
	float	integer;

	if (ft_isnan(x) || ft_isinf(x) || x == 0.0F)
		return (x);
	ft_modff(x, &integer);
	return (integer);
}
