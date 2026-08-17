/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaimali <gfaimali@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 11:55:36 by gfaimali          #+#    #+#             */
/*   Updated: 2026/08/14 10:37:30 by gfaimali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (*str < 97 || *str > 122)
			return (0);
		str++;
	}
	return (1);
}
/*
#include <stdio.h>
int main()
{

	printf("abc : %d\n", ft_str_is_lowercase("abcdefghijklmnopqrstuvwxyz"));
	printf("Abc : %d\n", ft_str_is_lowercase("Abcdefghijklmnopqrstuvwxyz"));	
	return (0);
}
*/
