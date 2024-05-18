/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_j1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 22:30:11 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
# double ft_jn(int, double);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

double
	ft_j1(register double x)
{
	return (ft_jn(1, x));
}
