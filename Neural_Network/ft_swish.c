/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swish.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 21:34:17 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
#    int ft_isinf(double);
#    int ft_isnan(double);
# double ft_sigmoid(double);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

/* *************************** [v] PROTOTYPES [v] *************************** */
extern __inline__ double	check_your_six(double x);
/* *************************** [^] PROTOTYPES [^] *************************** */

double
	ft_swish(register double x)
{
	double	result;

	if (ft_isinf(x) || ft_isnan(x) || x == 0.0)
		return (check_your_six(x));
	result = x * ft_sigmoid(x);
	return (result);
}

extern __inline__ double
	check_your_six(double x)
{
	if (ft_isnan(x) || ft_isinf(x) == 1 || x == 0.0)
		return (x);
	return (-(0.0 / 0.0));
}
