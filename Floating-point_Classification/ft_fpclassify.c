/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fpclassify.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 08:51:42 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
# define FP_NAN
# define FP_INFINITE
# define FP_ZERO
# define DBL_MIN
# define FP_SUBNORMAL
# define FP_NORMAL
#    int ft_isnan(double);
#    int ft_isinf(double);
# double ft_fabs(double);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

int
	ft_fpclassify(register double x)
{
	if (ft_isnan(x))
		return (FP_NAN);
	if (ft_isinf(x))
		return (FP_INFINITE);
	if (x == 0.0)
		return (FP_ZERO);
	if (ft_fabs(x) < (DBL_MIN))
		return (FP_SUBNORMAL);
	return (FP_NORMAL);
}

/* * * * * * * * * *
 *       FP_NAN 0  *
 *  FP_INFINITE 1  *
 *      FP_ZERO 2  *
 * FP_SUBNORMAL 3  *
 *    FP_NORMAL 4  *
 * * * * * * * * * */
