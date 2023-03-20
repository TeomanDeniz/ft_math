/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sigmoidf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 21:17:45 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/20 01:02:10 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../ft_math.h"

static inline float	check_your_six(register float x);

float
	ft_sigmoidf(register float x)
{
	if (ft_isnan(x) || ft_isinf(x))
		return (check_your_six(x));
	return (1.0F / (1.0F + ft_powf(M_E_F, -x)));
}

static inline float
	check_your_six(register float x)
{
	if (ft_isnan(x))
		return (x);
	if (ft_isinf(x) == -1)
		return (0.0F);
	return (1.0F);
}
