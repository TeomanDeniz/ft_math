/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copysignf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:49:33 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/19 22:17:34 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../ft_math.h"

float
	ft_copysignf(register float x, register float y)
{
	if (y >= 0.0F || !ft_signbitf(y))
		return (ft_fabsf(x));
	return (ft_fabsf(x) * -1.0F);
}
