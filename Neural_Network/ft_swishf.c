/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swishf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 21:34:17 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/20 03:31:19 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../ft_math.h"

static inline float	check_your_six(register float x);

float
	ft_swishf(register float x)
{
	if (ft_isinf(x) || ft_isnan(x) || x == 0.0F)
		return (check_your_six(x));
	return (x * ft_sigmoidf(x));
}

static inline float
	check_your_six(register float x)
{
	if (ft_isnan(x) || ft_isinf(x) == 1 || x == 0.0F)
		return (x);
	return (-(0.0F / 0.0F));
}
