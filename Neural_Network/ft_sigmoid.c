/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sigmoid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 21:17:45 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/20 01:03:46 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

/* PROTOTYPES */
static inline double	check_your_six(register double x);
/* PROTOTYPES */

double
	ft_sigmoid(register double x)
{
	if (ft_isnan(x) || ft_isinf(x))
		return (check_your_six(x));
	return (1.0 / (1.0 + ft_pow(M_E, -x)));
}

static inline double
	check_your_six(register double x)
{
	if (ft_isnan(x))
		return (x);
	if (ft_isinf(x) == -1)
		return (0.0);
	return (1.0);
}

/*
 * Original creator:
 *
 * https://github.com/nayayayay/sigmoid-function
 */
