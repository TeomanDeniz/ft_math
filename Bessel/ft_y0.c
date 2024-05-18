/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_y0.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 18:15:22 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
# define M_INVSQRTPI
#    int ft_isnan(double);
#    int ft_isinf(double);
# double ft_j0(double);
# double ft_log(double);
# double ft_fabs(double);
# double ft_sqrt(double);
# double ft_sin(double);
# double ft_cos(double);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

/* *************************** [v] PROTOTYPES [v] *************************** */
extern __inline__ double	check_your_six(double x);
/* *************************** [^] PROTOTYPES [^] *************************** */

double
	ft_y0(register double x)
{
	register double	y;
	register double	ans1;
	register double	ans2;

	if (ft_isnan(x) || ft_isinf(x) || x == 0.0)
		return (check_your_six(x));
	if (x < 2.0)
	{
		y = x * x;
		ans1 = -2957821389.0 + y * (7062834065.0 + y * (-512359803.6 + y * \
			(10879881.29 + y * (-86327.92757 + y * 228.4622733))));
		ans2 = 40076544269.0 + y * (745249964.8 + y * (7189466.438 + y * \
			(47447.26470 + y * (226.1030244 + y))));
		return (ans1 / ans2 + M_INVSQRTPI * ft_j0(x) * ft_log(x));
	}
	y = (8.0 / ft_fabs(x)) * (8.0 / ft_fabs(x));
	ans1 = 1.0 + y * (-0.1098628627E-2 + y * (0.2734510407E-4 + y * \
		(-0.2073370639E-5 + y * 0.2093887211E-6)));
	ans2 = -0.1562499995E-1 + y * (0.1430488765E-3 + y * \
		(-0.6911147651E-5 + y * (0.7621095161E-6 - y * 0.934935152E-7)));
	return (0.7978845608028654 / ft_sqrt(ft_fabs(x)) * (ans1 * \
		ft_sin((ft_fabs(x) - 0.785398164)) + (8.0 / ft_fabs(x)) * ans2 * \
		ft_cos((ft_fabs(x) - 0.785398164))));
}

extern __inline__ double
	check_your_six(double x)
{
	if (x == 0.0)
		return (-(1.0 / 0.0));
	if (ft_isnan(x))
		return (x);
	if (ft_isinf(x) == 1)
		return (0.0);
	return (-(0.0 / 0.0));
}
