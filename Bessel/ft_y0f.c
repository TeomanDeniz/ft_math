/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_y0f.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 18:15:22 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/20 02:10:02 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../ft_math.h"

static inline float	check_your_six(register float x);

float
	ft_y0f(register float x)
{
	register float	y;
	register float	ans1;
	register float	ans2;

	if (ft_isnan(x) || ft_isinf(x) || x == 0.0F)
		return (check_your_six(x));
	if (x < 2.0F)
	{
		y = x * x;
		ans1 = -2957821389.0F + y * (7062834065.0F + y * (-512359803.6F + y * \
			(10879881.29F + y * (-86327.92757F + y * 228.4622733F))));
		ans2 = 40076544269.0F + y * (745249964.8F + y * (7189466.438F + y * \
			(47447.26470F + y * (226.1030244F + y))));
		return (ans1 / ans2 + M_INVSQRTPI_F * ft_j0f(x) * ft_logf(x));
	}
	y = (8.0F / ft_fabsf(x)) * (8.0F / ft_fabsf(x));
	ans1 = 1.0F + y * (-0.1098628627E-2F + y * (0.2734510407E-4F + y * \
		(-0.2073370639E-5F + y * 0.2093887211E-6F)));
	ans2 = -0.1562499995E-1F + y * (0.1430488765E-3F + y * \
		(-0.6911147651E-5F + y * (0.7621095161E-6F - y * 0.934935152E-7F)));
	return (0.7978845608028654F / ft_sqrtf(ft_fabsf(x)) * (ans1 * \
		ft_sinf((ft_fabsf(x) - 0.785398164F)) + (8.0F / ft_fabsf(x)) * ans2 * \
		ft_cosf((ft_fabsf(x) - 0.785398164F))));
}

static inline float
	check_your_six(register float x)
{
	if (x == 0.0F)
		return (-(1.0F / 0.0F));
	if (ft_isnan(x))
		return (x);
	if (ft_isinf(x) == 1)
		return (0.0F);
	return (-(0.0F / 0.0F));
}
