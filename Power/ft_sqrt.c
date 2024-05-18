/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:03:31 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
#    int ft_isnan(double);
#    int ft_isinf(double);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

/* *************************** [v] PROTOTYPES [v] *************************** */
extern __inline__ double	sqrt_checker(double x);
/* *************************** [^] PROTOTYPES [^] *************************** */

double
	ft_sqrt(register double x)
{
	register double	last_guess;
	double			guess;

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

extern __inline__ double
	sqrt_checker(double x)
{
	if (x < 0.0)
		return (0.0 / 0.0);
	return (x);
}
