/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaimali <gfaimali@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 18:51:36 by gfaimali          #+#    #+#             */
/*   Updated: 2026/08/10 14:34:50 by gfaimali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	res;

	if (nb < 1 && nb != 0)
		return (0);
	else if (nb == 0)
		return (1);
	res = 1;
	while (nb > 1)
	{
		res = res * nb;
		nb -= 1;
	}
	return (res);
}
/*
#include <stdio.h>

int main()
{
	int res;
	res = ft_iterative_factorial(0);
	printf("%d\n",res);
	return 0;
}
*/
