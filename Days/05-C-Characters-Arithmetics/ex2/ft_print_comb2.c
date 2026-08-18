/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaimali <gfaimali@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 12:58:20 by gfaimali          #+#    #+#             */
/*   Updated: 2026/08/09 14:43:58 by gfaimali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	set1;
	int	set2;

	set1 = 0;
	while (set1 < 99)
	{
		set2 = set1 + 1;
		while (set2 <= 99)
		{
			ft_putchar(((set1 / 10) + '0'));
			ft_putchar(((set1 % 10) + '0'));
			ft_putchar(' ');
			ft_putchar(((set2 / 10) + '0'));
			ft_putchar((set2 % 10) + '0');
			if (set1 != 98 || set2 != 99)
				write(1, ", ", 2);
			set2 ++;
		}
		set1++;
	}
}
/*

int main()
{
	ft_print_comb2();
	return 0;
}
*/
