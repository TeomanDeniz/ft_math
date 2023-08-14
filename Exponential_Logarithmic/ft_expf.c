/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_expf.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 15:58:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/19 20:41:30 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

/* PROTOTYPES */
static inline float	check_your_six(register float x);
/* PROTOTYPES */

float
	ft_expf(register float x)
{
	register float			result;
	register float			term;
	register unsigned int	counter;

	if (ft_isinf(x) || ft_isnan(x) || x == 0.0F)
		return (check_your_six(x));
	if (x < 0.0F)
		return (1.0F / ft_expf(-x));
	counter = 0;
	result = 1.0F;
	term = 1.0F;
	while (++counter, x / counter > (x / (x * x + 42.0F)))
	{
		term *= x / counter;
		result += term;
	}
	return (result);
}

static inline float
	check_your_six(register float x)
{
	if (x == 0.0F)
		return (1.0F);
	if (ft_isinf(x) == -1)
		return (0.0F);
	if (ft_isinf(x) == 1)
		return (x);
	return (x);
}
