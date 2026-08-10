/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaimali <gfaimali@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 10:51:54 by gfaimali          #+#    #+#             */
/*   Updated: 2026/08/10 15:46:12 by gfaimali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	index;
	int	res;

	res = 1;
	index = power;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (index > 0)
	{
		res = res * nb;
		index--;
	}
	return (res);
}
/*
#include <stdio.h>

int main()
{
	int	test;

	test = ft_iterative_power(5,5);
	printf("%d\n",test);
        test = ft_iterative_power(5,0);
        printf("%d\n",test);
        test = ft_iterative_power(0,5);
        printf("%d\n",test);
        test = ft_iterative_power(-5,5);
        printf("%d\n",test);
        test = ft_iterative_power(5,-5);
        printf("%d\n",test);
	return (0);
}
*/
