/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sigmoidf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 21:17:45 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
# define M_E_F
#    int ft_isnan(double);
#    int ft_isinf(double);
#  float ft_powf(float, float);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

/* *************************** [v] PROTOTYPES [v] *************************** */
extern __inline__ float	check_your_six(float x);
/* *************************** [^] PROTOTYPES [^] *************************** */

float
	ft_sigmoidf(register float x)
{
	if (ft_isnan(x) || ft_isinf(x))
		return (check_your_six(x));
	return (1.0F / (1.0F + ft_powf(M_E_F, -x)));
}

extern __inline__ float
	check_your_six(float x)
{
	if (ft_isnan(x))
		return (x);
	if (ft_isinf(x) == -1)
		return (0.0F);
	return (1.0F);
}
