/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaimali <gfaimali@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 11:00:59 by gfaimali          #+#    #+#             */
/*   Updated: 2026/08/14 10:40:43 by gfaimali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (*str < 48 || *str > 57)
			return (0);
		str++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main()
{
	printf("0123456789 : %d\n", ft_str_is_numeric("0123456789"));
	printf("01234:56789 : %d\n", ft_str_is_numeric("01234:56789"));
	printf("0123456789a : %d\n", ft_str_is_numeric("0123456789a"));

	return (0);
}
*/
