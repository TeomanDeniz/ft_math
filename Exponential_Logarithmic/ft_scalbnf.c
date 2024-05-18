/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scalbnf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 13:30:51 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
#  float ft_ldexpf(float, int);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

float
	ft_scalbnf(register float x, register int exponent)
{
	return (ft_ldexpf(x, exponent));
}
