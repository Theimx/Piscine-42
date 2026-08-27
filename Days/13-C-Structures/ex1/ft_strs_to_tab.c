/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaimali <gfaimali@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 17:57:54 by gfaimali          #+#    #+#             */
/*   Updated: 2026/08/27 21:29:59 by gfaimali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++
	}
	return (i);
}

char	*ft_strcpy( char *src)
{
	char	*res;
	int	i;

	res = malloc(sizeof(char) * len(src) + 1);
	i = 0;
	while (src[i] != '\0')
	{
		res[i] = src[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int	i;
	struct s_stock_str struc;
	struct s_stock_str *	res;

	i = 0;
	res = malloc(sizeof(s_stock_str) * ac);
	if (res == NULL)
		return (NULL);
	while (i < ac)
	{
		struc->size = len(av[i]);
		struc->str = tab[i];
		struc->copy = ft_strcpy(tab[i]);
		res[i] = struc;
		i++;
	}
	res[i] = 0;
	return (res);
}
