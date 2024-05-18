/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_log2f.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 18:08:32 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
# define M_LN2_F
#    int ft_isnan(double);
#    int ft_isinf(double);
#  float ft_logf(float);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

float
	ft_log2f(register float x)
{
	if (ft_isnan(x) || ft_isinf(x))
		return (x);
	if (x == 0.0F)
		return ((-1.0F / 0.0F));
	if (x < 0.0F)
		return ((0.0F / 0.0F));
	return (ft_logf(x) / M_LN2_F);
}
