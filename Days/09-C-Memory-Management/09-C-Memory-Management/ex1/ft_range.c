/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaimali <gfaimali@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 10:38:18 by gfaimali          #+#    #+#             */
/*   Updated: 2026/08/20 11:43:22 by gfaimali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array_ints;
	int	i;

	if (min >= max)
		return (NULL);
	array_ints = malloc(sizeof(int) * (max - min));
	if (array_ints == NULL)
		return (NULL);
	i = 0;
	while (i < (max - min))
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
	int *arr = ft_range(5,15);
	for (int i = 0; i < 10; i++)
		printf("%d\n", arr[i]);
	return (0);
}
*/
