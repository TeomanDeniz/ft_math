/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lerp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:40:32 by hdeniz            #+#    #+#             */
/*   Updated: 2023/08/14 17:41:07 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double
	ft_lerp(register double x, register double y, register double f)
{
	return (x + f * (y - x));
}
