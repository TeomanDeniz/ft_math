/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eluf.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 00:55:12 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/20 03:31:17 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

float
	ft_eluf(register float x, register float alpha)
{
	if (x > 0.0F)
		return (x);
	return (alpha * (ft_expf(x) - 1.0F));
}
