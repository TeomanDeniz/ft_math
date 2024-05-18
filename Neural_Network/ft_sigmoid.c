/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sigmoid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 21:17:45 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
#    int ft_isnan(double);
#    int ft_isinf(double);
# double ft_pow(double, double);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

/* *************************** [v] PROTOTYPES [v] *************************** */
extern __inline__ double	check_your_six(double x);
/* *************************** [^] PROTOTYPES [^] *************************** */

double
	ft_sigmoid(register double x)
{
	double	result;

	if (ft_isnan(x) || ft_isinf(x))
		return (check_your_six(x));
	result = 1.0 / (1.0 + ft_pow(M_E, -x));
	return (result);
}

extern __inline__ double
	check_your_six(double x)
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
