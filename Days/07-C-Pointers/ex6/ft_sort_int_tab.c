/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaimali <gfaimali@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 11:06:15 by gfaimali          #+#    #+#             */
/*   Updated: 2026/08/13 20:13:51 by gfaimali         ###   ########.fr       */
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
		else if (tab[index] <= tab[index + 1])
			index++;
	}
}

#include <stdio.h>
int main()
{
	int test[] = { 9, 2, 4, 4, 8, 2, 1, 85, 0};
	ft_sort_int_tab(test, 11);
	int i;
	for (i = 0; i < 11; i++)
	{
		printf("%d", test[i]);
	}

	return 0;
}
