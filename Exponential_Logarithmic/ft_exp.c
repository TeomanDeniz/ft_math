/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 15:58:09 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
#    int ft_isinf(double);
#    int ft_isnan(double);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

/* *************************** [v] PROTOTYPES [v] *************************** */
extern __inline__ double	check_your_six(double x);
/* *************************** [^] PROTOTYPES [^] *************************** */

double
	ft_exp(register double x)
{
	double					result;
	register double			term;
	register unsigned int	counter;
	register double			x_x;

	if (ft_isinf(x) || ft_isnan(x) || x == 0.0)
		return (check_your_six(x));
	if (x < 0.0)
		return (1.0 / ft_exp(-x));
	counter = 0;
	result = 1.0;
	term = 1.0;
	x_x = x * x + 42.0;
	while (++counter, x / counter > (x / x_x))
	{
		term *= x / counter;
		result += term;
	}
	return (result);
}

extern __inline__ double
	check_your_six(double x)
{
	if (x == 0.0)
		return (1.0);
	if (ft_isinf(x) == -1)
		return (0.0);
	if (ft_isinf(x) == 1)
		return (x);
	return (x);
}
