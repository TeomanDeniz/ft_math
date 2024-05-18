/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nextafter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 18:58:04 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
# define DBL_MAX
# define DBL_MIN
#    int ft_isnan(double);
#    int ft_isinf(double);
# double ft_copysign(double, double);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

double
	ft_nextafter(double x, double y)
{
	if (ft_isnan(x) || ft_isnan(y))
		return (x + y);
	if (ft_isinf(y) || y <= 0.0)
		return (x);
	if (x == y)
		return (y);
	if (ft_isinf(x))
		return (ft_copysign(DBL_MAX, x));
	if (x == 0.0)
		return (ft_copysign(DBL_MIN, y));
	if ((y - x) > 0.0)
		return (x);
	return (-x);
}
