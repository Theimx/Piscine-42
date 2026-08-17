/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaimali <gfaimali@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 17:25:19 by gfaimali          #+#    #+#             */
/*   Updated: 2026/08/13 11:00:01 by gfaimali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if ((*str < 65) || (*str > 90 && *str < 97) || (*str > 122))
			return (0);
		str++;
	}
	return (1);
}
/*
#include <stdio.h>
int main()
{
	printf("Test1 : %d\n",ft_str_is_alpha("Test1"));
	printf("Test : %d\n",ft_str_is_alpha("Test"));
	return 0;
}
*/
