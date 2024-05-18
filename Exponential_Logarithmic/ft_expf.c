/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_expf.c                                          :+:      :+:    :+:   */
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
extern __inline__ float	check_your_six(float x);
/* *************************** [^] PROTOTYPES [^] *************************** */

float
	ft_expf(register float x)
{
	float					result;
	register float			term;
	register unsigned int	counter;
	register float			x_x;

	if (ft_isinf(x) || ft_isnan(x) || x == 0.0F)
		return (check_your_six(x));
	if (x < 0.0F)
		return (1.0F / ft_expf(-x));
	counter = 0;
	result = 1.0F;
	term = 1.0F;
	x_x = (x * x) + 42.0F;
	while (++counter, x / counter > (x / (x_x)))
	{
		term *= x / counter;
		result += term;
	}
	return (result);
}

extern __inline__ float
	check_your_six(float x)
{
	if (x == 0.0F)
		return (1.0F);
	if (ft_isinf(x) == -1)
		return (0.0F);
	if (ft_isinf(x) == 1)
		return (x);
	return (x);
}
