/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaimali <gfaimali@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 11:16:02 by gfaimali          #+#    #+#             */
/*   Updated: 2026/08/10 15:46:46 by gfaimali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
/*
#include <stdio.h>

int main()
{
        int     test;

        test = ft_recursive_power(5,5);
        printf("%d\n",test);
        test = ft_recursive_power(5,0);
        printf("%d\n",test);
        test = ft_recursive_power(0,5);
        printf("%d\n",test);
        test = ft_recursive_power(-5,5);
        printf("%d\n",test);
        test = ft_recursive_power(5,-5);
        printf("%d\n",test);
        return (0);
}
*/
