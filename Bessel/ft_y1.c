/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_y1.c                                            :+:      :+:    :+:   */
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
# double ft_sqrt(double);
# double ft_sin(double);
# double ft_cos(double);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

/* *************************** [v] PROTOTYPES [v] *************************** */
extern __inline__ double	check_your_six(double x);
/* *************************** [^] PROTOTYPES [^] *************************** */

double
	ft_y1(register double x)
{
	register double	y;
	register double	ans1;
	register double	ans2;

	if (ft_isnan(x) || ft_isinf(x) || x == 0.0)
		return (check_your_six(x));
	y = 8.0 / x;
	ans1 = 1.0 + y * (-0.1098628627E-2 + y * (0.2734510407E-4 + y * \
		(-0.2073370639E-5 + y * (0.2093887211E-6))));
	ans2 = -0.1562499995E-1 + y * (0.1430488765E-3 + y * \
		(-0.6911147651E-5 + y * (0.7621095161E-6 - y * 0.934935152E-7)));
	return (ft_sqrt(0.636619772 / x) * (ans1 * ft_sin(x - 2.356194491) + \
			y * ans2 * ft_cos(x - 2.356194491)));
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
