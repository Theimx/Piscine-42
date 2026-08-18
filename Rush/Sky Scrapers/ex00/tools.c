/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaimali <gfaimali@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 14:02:15 by gfaimali          #+#    #+#             */
/*   Updated: 2026/08/16 14:22:23 by gfaimali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

//Dqns ce fichier ont met des fonctions qui nous serviront plus tard, des "outils".

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}

}

int	is_good_number(char c)
{
	return (c >= '0' && c <= '9');
}
