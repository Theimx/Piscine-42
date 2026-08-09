/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaimali <gfaimali@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 13:55:52 by gfaimali          #+#    #+#             */
/*   Updated: 2026/08/05 16:05:02 by gfaimali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	long	start;
	long	max;
	char	x;

	start = 1;
	max = 27;
	x = 'a';
	while (start < max)
	{
		write(1, &x, 1);
		x += 1;
		start += 1;
	}
}
