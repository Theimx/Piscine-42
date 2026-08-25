/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaimali <gfaimali@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 10:17:29 by gfaimali          #+#    #+#             */
/*   Updated: 2026/08/25 11:54:02 by gfaimali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char	*ft_strdup(char *src)
{
	char	*clone;
	int		i;

	if (src == NULL)
		return (NULL);
	clone = malloc(len(src) + 1);
	i = 0;
	if (clone == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		clone[i] = src[i];
		i++;
	}
	clone[i] = '\0';
	return (clone);
}
/*
#include <stdio.h>
int main()
{
	printf("%s\n",ft_strdup("test")); 
	return (0);
}
*/
