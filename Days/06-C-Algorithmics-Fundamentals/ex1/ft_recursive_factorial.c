/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaimali <gfaimali@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 20:05:29 by gfaimali          #+#    #+#             */
/*   Updated: 2026/08/10 14:34:27 by gfaimali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 1)
		return (1);
	else if (nb == 0)
		return (1);
	else if (nb > 1)
		return (nb * ft_recursive_factorial(nb - 1));
	return (0);
}
/*
#include <stdio.h>
int main()
{
	int res = ft_recursive_factorial(0);
	printf("%d\n",res);
	return 0;
}
*/
