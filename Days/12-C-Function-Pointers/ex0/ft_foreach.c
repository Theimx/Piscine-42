/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaimali <gfaimali@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 21:16:30 by gfaimali          #+#    #+#             */
/*   Updated: 2026/08/26 22:33:02 by gfaimali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int	i;

	i = 0;
	while (i < lenghth)
	{
		f(tab[i]);
		i++;
	}
}
