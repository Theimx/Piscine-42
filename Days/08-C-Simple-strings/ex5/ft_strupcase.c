/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaimali <gfaimali@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 18:22:11 by gfaimali          #+#    #+#             */
/*   Updated: 2026/08/13 20:07:55 by gfaimali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 122 && str[i] > 97)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

#include <stdio.h>
int main()
{
	char	*test;

	test = ft_strupcase("Testing123}");
	printf("%s\n", test);
	return (0);
}
