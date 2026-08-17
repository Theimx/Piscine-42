/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaimali <gfaimali@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 12:03:20 by gfaimali          #+#    #+#             */
/*   Updated: 2026/08/17 17:59:32 by gfaimali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	return ;
}

int	ft_is_alphanumeric(char c)
{
	if ((c < 65) || (c > 90 && c < 97) || (c > 122))
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_strlowcase(str);
	i = 0;
	while (str[i] != '\0')
	{
		if (
			(i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
			|| (i > 0 && !ft_is_alphanumeric(str[i - 1])
				&& (str[i] >= 'a' && str[i] <= 'z')
				&& (str[i - 1] < 48 || str[i - 1] > 57))
		)
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
/*
int main()
{
	char str[] = "c|haine 4de tes;t";
	printf("%s",ft_strcapitalize(str));
	return (0);
}
*/
