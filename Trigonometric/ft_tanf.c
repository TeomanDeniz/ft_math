/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tanf.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 15:58:09 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
#  float ft_sinf(float);
#  float ft_cosf(float);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

float
	ft_tanf(register float x)
{
	return (ft_sinf(x) / ft_cosf(x));
}
