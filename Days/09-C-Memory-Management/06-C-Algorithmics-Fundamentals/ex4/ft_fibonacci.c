/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaimali <gfaimali@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 11:57:03 by gfaimali          #+#    #+#             */
/*   Updated: 2026/08/10 12:10:02 by gfaimali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
#include <stdio.h>

int main()
{
	int res;
	res = ft_fibonacci(0);
	printf("%d\n",res);
        res = ft_fibonacci(1);
        printf("%d\n",res);
        res = ft_fibonacci(2);
        printf("%d\n",res);
        res = ft_fibonacci(3);
        printf("%d\n",res);
        res = ft_fibonacci(4);
        printf("%d\n",res);
        res = ft_fibonacci(-10);
        printf("%d\n",res);

	return 0;
}
*/
