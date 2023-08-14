/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:03:31 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/26 15:35:56 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

/* PROTOTYPES */
static inline double	sqrt_checker(register double x);
/* PROTOTYPES */

double
	ft_sqrt(register double x)
{
	register double	guess;
	register double	last_guess;

	if (x <= 0.0 || ft_isnan(x) || ft_isinf(x))
		return (sqrt_checker(x));
	guess = x / 2.0;
	last_guess = guess + 1.0;
	while (guess != last_guess)
	{
		last_guess = guess;
		guess = (guess + x / guess) / 2.0;
	}
	return (guess);
}

static inline double
	sqrt_checker(register double x)
{
	if (x < 0.0)
		return (0.0 / 0.0);
	return (x);
}
