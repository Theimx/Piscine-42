/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaimali <gfaimali@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 14:28:29 by gfaimali          #+#    #+#             */
/*   Updated: 2026/08/06 09:58:40 by gfaimali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	long	start;
	long	max;
	char	x;

	start = 1;
	max = 27;
	x = 'z';
	while (start < max)
	{
		write(1, &x, 1);
		x -= 1;
		start += 1;
	}
}
