/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_j0.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 19:20:11 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
# double ft_jn(int, double);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

double
	ft_j0(register double x)
{
	return (ft_jn(0, x));
}

// My entire fucking time wasted when I find a better way in ft_jn() function.

/*extern __inline__ double
	check_your_six(register double x)
{
	if (ft_isnan(x) || ft_isinf(x))
		return (x);
	if (x == 0.0)
		return (1.0);
}*/

/*double
	ft_j0(register double x)
{
	register double	xx;
	register double	y;
	register double	ans1;
	register double	ans2;

	if (x == 0.0 || ft_isnan(x) || ft_isinf(x))
		return (check_your_six(x));
	if (ft_fabs(x) < 8.0)
	{
		xx = x * x;
		ans1 = 57568490574.0 + xx * (-13362590354.0 + xx * (651619640.7 + \
			xx * (-11214424.18 + xx * (77392.33017 + xx * (-184.9052456)))));
		ans2 = 57568490411.0 + xx * (1029532985.0 + xx * (9494680.718
			+ xx * (59272.64853 + xx * (267.8532712 + xx))));
		return (ans1 / ans2);
	}
	xx = ft_fabs(x) * ft_fabs(x);
	y = (8.0 / ft_fabs(x)) * (8.0 / ft_fabs(x));
	ans1 = 1.0 + y * (-0.1098628627E-2 + y * (0.2734510407E-4 + y * \
		(-0.2073370639E-5 + y * 0.2093887211E-6)));
	ans2 = -0.1562499995E-1 + y * (0.1430488765E-3 + y * \
		(-0.6911147651E-5 + y * (0.7621095161E-6 - y * 0.934935152E-7)));
	return (ft_sqrt(0.636619772 / ft_fabs(x)) * \
		(ft_cos(ft_fabs(x) - 0.785398164) * ans1 - \
		(8.0 / ft_fabs(x)) * ft_sin(ft_fabs(x) - 0.785398164) * ans2));
}*/
