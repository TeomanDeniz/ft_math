/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nan.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:56:30 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/02 16:56:33 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
union
{
	double value;
	unsigned char bytes[8]; // Should "[sizeof(double)]" instead of "[8]", !VLA!
} u_number;

double
	ft_nan(const char *tag_pointer)
{
	register union	u_number;
	register int	counter;

	u_number.value = (0.0 / 0.0);
	if (tag_pointer != ((void *)0))
	{
		counter = -1;
		while (++counter, (tag_pointer[counter] != '\0') \
			&& (counter < (sizeof(u_number.bytes) - 1)))
			u_number.bytes[counter] = tag_pointer[counter];
		u_number.bytes[counter] = '\0';
	}
	return (u_number.value);
}
*/

// My sincerest apologies, but i am fucking sick of this thing

double
	ft_nan(const char *tag_pointer)
{
	(void)tag_pointer;
	return (0.0 / 0.0);
}
