/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaimali <gfaimali@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 11:48:56 by gfaimali          #+#    #+#             */
/*   Updated: 2026/08/20 16:40:58 by gfaimali         ###   ########.fr       */
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
	while (i < size)
	{
		res += ft_len(strs[i]);
		if (i < size - 1)
			res += ft_len(sep);
		i++;
	}
	return (res);
}

int	ft_copy(char *dest, char *src, int pos)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[pos] = src[i];
		pos++;
		i++;
	}
	return (pos);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		i;
	int		k;

	i = 0;
	k = 0;
	res = malloc(ft_final_len(strs, size, sep) + 1);
	if (res == NULL)
		return (NULL);
	while (i < size)
	{
		k = ft_copy(res, strs[i], k);
		if (i < size - 1)
			k = ft_copy(res, sep, k);
		i++;
	}
	res[k] = '\0';
	return (res);
}
