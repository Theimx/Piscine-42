/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaimali <gfaimali@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 16:09:35 by gfaimali          #+#    #+#             */
/*   Updated: 2026/08/24 13:22:05 by gfaimali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Tderive
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

//	Renvoie 1 si la base est correcte 0 sinon.
int	is_base_correct(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (len(base) < 2)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+' || base[i] == ' ')
			return (0);
		else if (base[i] < 32 || base[i] == 127)
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

// Remvoie la position de l'elt dans la base.
int	id_base(char elt, char *base)
{
	int	index;

	index = 0;
	while (base[index] != '\0')
	{
		if (base[index] == elt)
			return (index);
		index++;
	}
	return (0);
}

int	ft_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
		return (nb * ft_power(nb, power - 1));
}

int	len_malloc(int nb, char *base_to)
{
	int	res;
	int	base_len;

	res = 0;
	base_len = len(base_to);
	if (nb == 0)
		return (1);
	if (nb < 0)
		res++;
	while (nb != 0)
	{
		nb = nb / base_len;
		res++;
	}
	return (res);
}
/*


#include <stdio.h>
int	main()
{
	printf("%d\n", len_malloc(10, "0123456789"));
        printf("%d\n", len_malloc(-10, "0123456789"));
        printf("%d\n", len_malloc(10, "01"));
        printf("%d\n", len_malloc(-10, "01"));
	
	
	printf("%d\n", id_base('0', "0123456789"));
	printf("%d\n", id_base('9', "0123456789"));
	printf("%d\n", id_base('t', "0123456789"));
	printf("%d\n", id_base(' ', "0123456789"));


	len : Valide
	printf("%d\n", len(""));
	printf("%d\n", len("1"));
	printf("%d\n", len("10"));
	printf("%d\n", len("101"));

	is_base_correct : Valide
	printf("%d\n", is_base_correct("1"));
	printf("%d\n", is_base_correct("01"));
	printf("%d\n", is_base_correct("+01"));
	printf("%d\n", is_base_correct("0123456789"));
	printf("%d\n", is_base_correct("01-"));
	printf("%d\n", is_base_correct("0123456789abcdef"));
	printf("%d\n", is_base_correct("010234"));
	printf("%d\n", is_base_correct("^*&%#"));
	printf("%d\n", is_base_correct("1236 7890"));
	

	return (0);
}
*/