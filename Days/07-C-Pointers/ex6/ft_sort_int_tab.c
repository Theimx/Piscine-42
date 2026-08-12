/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaimali <gfaimali@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 11:06:15 by gfaimali          #+#    #+#             */
/*   Updated: 2026/08/12 12:25:26 by gfaimali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	index;

	index = 0;
	while (index < size - 1)
	{
		if (tab[index] > tab[index + 1])
		{
			ft_swap(&tab[index], &tab[index + 1]);
			index--;
		}
		else if (tab[index] < tab[index + 1])
			index++;
	}
}
/*
#include <stdio.h>
int main()
{
	int test[10] = {0, 2, 1, 3, 4, 7, 6 , 5, 8, 9};
	ft_sort_int_tab(test, 10);
	int i;
	for (i = 0; i < 10; i++)
	{
		printf("%d", test[i]);
	}

	return 0;
}
*/
