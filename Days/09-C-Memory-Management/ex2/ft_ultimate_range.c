/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaimali <gfaimali@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 11:32:51 by gfaimali          #+#    #+#             */
/*   Updated: 2026/08/20 11:23:50 by gfaimali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	size = max - min;
	*range = (int *)malloc(sizeof(int) * size);
	if (*range == NULL)
		return (-1);
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*tab;
	int	size;
	int	i;

	tab = NULL;

	printf("(min = 5, max = 10)\n");
	size = ft_ultimate_range(&tab, 5, 10);
	
	printf("return : %d\n", size);
	if (size > 0 && tab != NULL)
	{
		printf("Content : ");
		i = 0;
		while (i < size)
		{
			printf("%d ", tab[i]);
			i++;
		}
		printf("\n");
		free(tab);
		tab = NULL;
	}
	else
	{
		printf("Tab vide\n");
	}
	printf("\n(min = 10, max = 5)\n");
	size = ft_ultimate_range(&tab, 10, 5);
	printf("Return : %d\n", size);
	if (tab == NULL)
		printf("Succes : NULL.\n");
	else
		printf("Fail : not NULL.\n");

	return (0);
}
*/
