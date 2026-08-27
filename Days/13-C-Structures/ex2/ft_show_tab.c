/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaimali <gfaimali@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 21:47:38 by gfaimali          #+#    #+#             */
/*   Updated: 2026/08/27 22:53:35 by gfaimali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	rec(int nb)
{
	char	c;

	if (nb == 0)
	{
		return (0);
	}
	else if (nb >= 1)
	{
		c = (nb % 10) + '0';
		rec((nb / 10));
		write(1, &c, 1);
		return (0);
	}
	return (0);
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
	{
		write(1, "0", 1);
	}
	else if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	rec(nb);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;
	int	j;

	i = 0;
	(void)j;
	while (par[i].str != 0)
	{
		j = 0;
		while (par[i].str[j] != '\0')
		{
			write(1, &par[i].str[j], 1);
			j++;
		}
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		j = 0;
		while (par[i].copy[j] != '\0')
		{
			write(1, &par[i].copy[j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
