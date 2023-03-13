/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prelu.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:11:53 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/13 15:11:54 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double
	ft_prelu(register double x, register double alpha)
{
	if (x > 0)
		return (x);
	return (alpha * x);
}
