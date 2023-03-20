/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fpclassifyf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 08:51:42 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/19 21:58:43 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../ft_math.h"

int
	ft_fpclassifyf(register float x)
{
	if (ft_isnan(x))
		return (FP_NAN);
	if (ft_isinf(x))
		return (FP_INFINITE);
	if (x == 0.0F)
		return (FP_ZERO);
	if (ft_fabs(x) < (FLT_MIN))
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
