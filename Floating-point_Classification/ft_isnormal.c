/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnormal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 20:23:31 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
# define DBL_MIN
#    int ft_isfinite(double);
# double ft_fabs(double);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

int
	ft_isnormal(register double x)
{
	int	result;

	result = ft_isfinite(x) && x != 0.0 && ft_fabs(x) >= DBL_MIN;
	return (result);
}
