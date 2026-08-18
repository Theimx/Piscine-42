/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaimali <gfaimali@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 13:39:19 by gfaimali          #+#    #+#             */
/*   Updated: 2026/08/17 18:33:00 by gfaimali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_printable(char c)
{
	if (c >= 32 && c != 127)
		return (0);
	return (1);
}

void	dec_to_hexa(char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	write(1, &hex[(unsigned char)c / 16], 1);
	write(1, &hex[(unsigned char)c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_str_is_printable(str[i]) == 1)
		{
			write(1, "\\", 1);
			dec_to_hexa(str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
/*
int main()
{
	ft_putstr_non_printable("Test\nTEST");
	return (0);
}
*/
