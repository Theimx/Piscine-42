/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaimali <gfaimali@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 15:50:04 by gfaimali          #+#    #+#             */
/*   Updated: 2026/08/12 11:02:36 by gfaimali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	frm_first;
	int	frm_last;

	frm_last = size - 1;
	frm_first = 0;
	while (frm_first < frm_last)
	{
		swap(&tab[frm_last], &tab[frm_first]);
		frm_first++;
		frm_last--;
	}
}
/*
#include <stdio.h>
int main()
{
        int myNumbers[] = {25, 50, 75, 100, 125, 150, 175};
        for (int i = 0; i < 7; i++){
        printf("Valeur : %d\n", myNumbers[i]);
        }
	printf("\n");
        ft_rev_int_tab(myNumbers, 7);
        for (int i = 0; i < 7; i++){
        printf("Valeur : %d\n", myNumbers[i]);
        }
        printf("\n");
        printf("\n");
        printf("\n");
        int myNumbers2[] = {25, 50, 75, 100, 125, 150};
        for (int i = 0; i < 6; i++){
        printf("Valeur : %d\n", myNumbers2[i]);
        }
	printf("\n");
        ft_rev_int_tab(myNumbers2, 6);
        for (int i = 0; i < 6; i++){
        printf("Valeur : %d\n", myNumbers2[i]);
        }
        return 0;
}
*/
