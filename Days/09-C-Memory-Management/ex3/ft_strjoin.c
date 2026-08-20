/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaimali <gfaimali@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 11:48:56 by gfaimali          #+#    #+#             */
/*   Updated: 2026/08/20 15:40:15 by gfaimali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_final_len(char **strs, int size, char *sep)
{
	int	res;
	int	i;

	res = 0;
	i = 0;
	if (size == 0)
		return (0);

	while (strs[i] != NULL)
	{
		res += ft_len(strs[i]);
		i++;
		if (strs[i] != NULL)
			res += ft_len(sep);
	}
	return (res);
}
