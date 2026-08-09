/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaimali <gfaimali@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 20:31:58 by gfaimali          #+#    #+#             */
/*   Updated: 2026/08/05 21:09:27 by gfaimali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	long	starti;
	long	finish;
	char	p;

	starti = 0;
	finish = 10;
	p = '0';
	while (starti < finish)
	{
		write(1, &p, 1);
		p += 1;
		starti += 1;
	}
}
