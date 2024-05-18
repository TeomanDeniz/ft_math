/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hypot.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 12:38:27 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
#    int ft_isinf(double);
#    int ft_isnan(double);
# double ft_sqrt(double);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

double
	ft_hypot(double p, double b)
{
	if (ft_isinf(p) || ft_isinf(b))
		return (1.0 / 0.0);
	if (ft_isnan(p))
		return (p);
	if (ft_isnan(b))
		return (b);
	if (p == 0.0 && b == 0.0)
		return (0.0);
	return (ft_sqrt((p * p) + (b * b)));
}
