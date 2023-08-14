/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swish.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 21:34:17 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/20 01:23:19 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

/* PROTOTYPES */
static inline double	check_your_six(register double x);
/* PROTOTYPES */

double
	ft_swish(register double x)
{
	if (ft_isinf(x) || ft_isnan(x) || x == 0.0)
		return (check_your_six(x));
	return (x * ft_sigmoid(x));
}

static inline double
	check_your_six(register double x)
{
	if (ft_isnan(x) || ft_isinf(x) == 1 || x == 0.0)
		return (x);
	return (-(0.0 / 0.0));
}
