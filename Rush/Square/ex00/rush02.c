/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaimali <gfaimali@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 17:02:04 by gfaimali          #+#    #+#             */
/*   Updated: 2026/08/09 17:42:58 by gfaimali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(char first, char mid, int len)
{
	int	index;

	index = 0;
	ft_putchar(first);
	while (index < (len - 2))
	{
		ft_putchar(mid);
		index++;
	}
	if (len > 1)
		ft_putchar(first);
	ft_putchar('\n');
}

int	exept(int x, int y, char first)
{
	if (x == 1 && y == 1)
	{
		ft_putchar(first);
		ft_putchar('\n');
		return (1);
	}
	else if (y == 1 && x == 2)
	{
		ft_putchar(first);
		ft_putchar(first);
		ft_putchar('\n');
		return (1);
	}
	else if (y == 2 && x == 1)
	{
		ft_putchar(first);
		ft_putchar('\n');
		ft_putchar('C');
		ft_putchar('\n');
		return (1);
	}
	return (0);
}

void	rush(int x, int y)
{
	int	test;
	int	index;

	if (x <= 0 || y <= 0)
		return ;
	test = exept(x, y, 'A');
	if (test == 1)
		return ;
	index = 1;
	while (index <= y)
	{
		if (index == 1)
			print_line('A', 'B', x);
		else if (index == y)
			print_line('C', 'B', x);
		else
			print_line('B', ' ', x);
		index++;
	}
}
