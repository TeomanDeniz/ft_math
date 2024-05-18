/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exp2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 16:18:27 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
#    int ft_isinf(double);
#    int ft_isnan(double);
# double ft_exp(double);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

#define LOG2_F 0.69314718055994528623

double
	ft_exp2(register double x)
{
	double	result;

	if (ft_isinf(x) || ft_isnan(x) == 1)
	{
		result = x;
		return (result);
	}
	if (ft_isinf(x))
		return (0.0);
	result = ft_exp(x * LOG2_F);
	return (result);
}
