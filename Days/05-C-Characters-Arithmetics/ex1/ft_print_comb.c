/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaimali <gfaimali@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 12:06:58 by gfaimali          #+#    #+#             */
/*   Updated: 2026/08/09 13:23:30 by gfaimali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	show_result(int c, int d, int u)
{
	char	cc;
	char	cd;
	char	cu;

	cc = c + '0';
	cd = d + '0';
	cu = u + '0';
	ft_putchar(cc);
	ft_putchar(cd);
	ft_putchar(cu);
	if (c != 7 || d != 8 || u != 9)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	c;
	int	d;
	int	u;

	c = 0;
	while (c <= 7)
	{
		d = c + 1;
		while (d <= 8)
		{
			u = d + 1;
			while (u <= 9)
			{
				show_result(c, d, u);
				u = u + 1;
			}
			d++;
		}
		c++;
	}
}
/*
int main()
{
	ft_print_comb();
	return 0;
}*/
