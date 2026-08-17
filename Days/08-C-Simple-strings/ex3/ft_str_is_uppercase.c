/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaimali <gfaimali@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 18:06:51 by gfaimali          #+#    #+#             */
/*   Updated: 2026/08/14 10:44:30 by gfaimali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (*str < 65 || *str > 90)
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
	printf("ABC : %d\n", ft_str_is_lowercase("ABCDEFGHIJKLMNOPQRSTUVWXYZ"));	
	return (0);
}
*/
