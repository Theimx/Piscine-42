/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaimali <gfaimali@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 10:33:59 by gfaimali          #+#    #+#             */
/*   Updated: 2026/08/09 17:35:28 by gfaimali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Fais avec Esteban Lopez et Correntin le Theno et Caroline Glaz

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
/*
int main()
{
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(-4647542);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(-42);
	write(1, "\n", 1);
	ft_putnbr(42);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	return 0;
}*/
