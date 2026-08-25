/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaimali <gfaimali@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 14:59:16 by gfaimali          #+#    #+#             */
/*   Updated: 2026/08/24 20:02:15 by gfaimali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	id_base(char elt, char *base);// renvoie la position d'un char dans la base.
int	is_base_correct(char *base);
int	len(char *str);
int	ft_power(int nb, int power);
int	len_malloc(int nb, char *base_to);

//prend un nombre dans une base n et le renvoie dans la base 10.
int	basen_to_dec(char *nbr, char *base_from)
{
	int	res;
	int	i;
	int	sign;
	int	base_len;
	int	power;

	res = 0;
	i = 0;
	sign = 1;
	base_len = len(base_from);
	while (nbr[i] == '-' || nbr[i] == '+')
	{
		if (nbr[i] == '-')
			sign = -sign;
		i++;
	}
	power = len(nbr) - i - 1;
	while (nbr[i] != '\0')
	{
		res = res + (id_base(nbr[i], base_from) * ft_power(base_len, power));
		power--;
		i++;
	}
	return (res * sign);
}

char	*dec_to_basen(int nb, char *base_to)
{
	char			*str;
	unsigned int	n;
	int				i;
	int				neg;
	int				base_len;

	base_len = len(base_to);
	neg = nb < 0;
	n = neg ? -(unsigned int)nb : (unsigned int)nb;
	i = len_malloc(nb, base_to);
	str = malloc(sizeof(char) * (i + 1));
	if (str == NULL)
		return (NULL);
	str[i--] = '\0';
	if (n == 0)
		str[i--] = base_to[0];
	while (n != 0)
	{
		str[i--] = base_to[n % base_len];
		n /= base_len;
	}
	if (neg)
		str[0] = '-';
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	dec_nbr;

	if (is_base_correct(base_from) != 1 || is_base_correct(base_to) != 1)
		return (NULL);
	dec_nbr = basen_to_dec(nbr, base_from);
	return (dec_to_basen(dec_nbr, base_to));
}
/*
#include <stdio.h>
int	main()
{

	printf("%s\n", ft_convert_base("2147483647","0123456789", "0123456789"));

	printf("%s\n", ft_convert_base("-2147483648","0123456789", "01"));
		

	printf("%s\n", ft_convert_base("-2147483648","0123456789", "0123456789ABCDEF"));
		
	// printf("%s\n", ft_convert_base("-10", "0123456789", "01"));
	// printf("%s\n", ft_convert_base("-1010", "01", "0123456789"));
	// printf("%s\n", ft_convert_base("-FF", "0123456789ABCDEF", "0123456789"));
	// printf("%s\n", ft_convert_base("-255", "0123456789", "0123456789ABCDEF"));
	// printf("%s\n", ft_convert_base("-100", "0123456789", "01234567"));
	// printf("%s\n", ft_convert_base("-777", "01234567", "0123456789"));

	
	// printf("%d\n", basen_to_dec("1010", "01"));
	// printf("%d\n", basen_to_dec("+0", "0123456789"));
	// printf("%d\n", basen_to_dec("-------10", "0123456789"));
	// printf("%d\n", basen_to_dec("A", "0123456789ABCDEF"));
	// printf("%d\n", basen_to_dec("eyn", "poneyvif"));
	

	return (0);
}
*/