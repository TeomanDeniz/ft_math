/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rintf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 00:26:30 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/29 00:27:12 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

float
	ft_rintf(register float x)
{
	if (x > 0.0F)
		return (ft_floorf(x + 0.5F));
	if (x < 0.0F)
		return (ft_ceilf(x - 0.5F));
	return (x);
}
