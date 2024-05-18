/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swishf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 21:34:17 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
#    int ft_isinf(double);
#    int ft_isnan(double);
#  float ft_sigmoidf(float);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

/* *************************** [v] PROTOTYPES [v] *************************** */
extern __inline__ float	check_your_six(float x);
/* *************************** [^] PROTOTYPES [^] *************************** */

float
	ft_swishf(register float x)
{
	float	result;

	if (ft_isinf(x) || ft_isnan(x) || x == 0.0F)
		return (check_your_six(x));
	result = x * ft_sigmoidf(x);
	return (result);
}

extern __inline__ float
	check_your_six(float x)
{
	if (ft_isnan(x) || ft_isinf(x) == 1 || x == 0.0F)
		return (x);
	return (-(0.0F / 0.0F));
}
