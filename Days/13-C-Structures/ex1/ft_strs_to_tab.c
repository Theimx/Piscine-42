/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaimali <gfaimali@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 17:57:54 by gfaimali          #+#    #+#             */
/*   Updated: 2026/08/27 21:46:26 by gfaimali         ###   ########.fr       */
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
		i++;
	}
	return (i);
}

char	*ft_strcpy( char *src)
{
	char	*res;
	int		i;

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

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*res;
	int					i;

	i = 0;
	res = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (res == NULL)
		return (NULL);
	while (i < ac)
	{
		res[i].size = len(av[i]);
		res[i].str = av[i];
		res[i].copy = ft_strcpy(av[i]);
		i++;
	}
	res[i].str = 0;
	res[i].copy = 0;
	return (res);
}
