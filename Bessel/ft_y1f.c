/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_y1f.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 23:27:03 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
#    int ft_isnan(double);
#    int ft_isinf(double);
#  float ft_sqrtf(float);
#  float ft_sinf(float);
#  float ft_cosf(float);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

/* *************************** [v] PROTOTYPES [v] *************************** */
extern __inline__ float	check_your_six(float x);
/* *************************** [^] PROTOTYPES [^] *************************** */

float
	ft_y1f(register float x)
{
	register float	y;
	register float	ans1;
	register float	ans2;
	float			result;

	if (ft_isnan(x) || ft_isinf(x) || x == 0.0F)
		return (check_your_six(x));
	y = 8.0F / x;
	ans1 = 1.0F + y * (-0.1098628627E-2F + y * (0.2734510407E-4F + y * \
		(-0.2073370639E-5F + y * (0.2093887211E-6F))));
	ans2 = -0.1562499995E-1F + y * (0.1430488765E-3F + y * \
		(-0.6911147651E-5F + y * (0.7621095161E-6F - y * 0.934935152E-7F)));
	result = ft_sqrtf(0.636619772F / x) * (ans1 * ft_sinf(x - 2.356194491F) + \
			y * ans2 * ft_cosf(x - 2.356194491F));
	return (result);
}

extern __inline__ float
	check_your_six(float x)
{
	if (x == 0.0F)
		return (-(1.0F / 0.0F));
	if (ft_isnan(x))
		return (x);
	if (ft_isinf(x))
		return (0.0F);
	return (-(0.0F / 0.0F));
}
