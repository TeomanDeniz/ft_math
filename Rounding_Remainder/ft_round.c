/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_round.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 14:37:55 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
#    int ft_isnan(double);
#    int ft_isinf(double);
# double ft_modf(double, double *);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

double
	ft_round(register double x)
{
	double			intpart;
	register double	fracpart;

	if (ft_isnan(x) || ft_isinf(x) || x == 0.0)
	{
		intpart = x;
		return (intpart);
	}
	fracpart = ft_modf(x, &intpart);
	if (x > 0.0)
	{
		if (fracpart >= 0.5)
			return (intpart + 1.0);
		return (intpart);
	}
	if (fracpart <= -0.5)
		return (intpart - 1.0);
	return (0.0);
}
