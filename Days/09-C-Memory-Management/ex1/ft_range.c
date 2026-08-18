/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaimali <gfaimali@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 10:38:18 by gfaimali          #+#    #+#             */
/*   Updated: 2026/08/18 11:03:56 by gfaimali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array_ints;
	int	i;

	array_ints = malloc(sizeof(int) * max);
	i = 0;
	while (i < max)
	{
		array_ints[i] = min + i;
		i++;
	}
	return (array_ints);
}
/*
#include <stdio.h>
int main()
{
	int *arr = ft_range(0,10);
	for (int i = 0; i < 10; i++)
		printf("%d\n", arr[i]);
	return (0);
}
*/
