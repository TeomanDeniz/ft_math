/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrtf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:03:31 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/19 21:30:56 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

/* PROTOTYPES */
static inline float	sqrt_checker(register float x);
/* PROTOTYPES */

float
	ft_sqrtf(register float x)
{
	register float	guess;
	register float	last_guess;

	if (x <= 0.0F || ft_isnan(x) || ft_isinf(x))
		return (sqrt_checker(x));
	guess = x / 2.0F;
	last_guess = guess + 1.0F;
	while (guess != last_guess)
	{
		last_guess = guess;
		guess = (guess + x / guess) / 2.0F;
	}
	return (guess);
}

static inline float
	sqrt_checker(register float x)
{
	if (x < 0.0F)
		return (0.0F / 0.0F);
	return (x);
}
