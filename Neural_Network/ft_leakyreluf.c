/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_leakyreluf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:47:39 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/20 00:58:41 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

float
	ft_leakyreluf(register float x, register float alpha)
{
	if (x > 0.0F)
		return (x);
	return (alpha * x);
}
