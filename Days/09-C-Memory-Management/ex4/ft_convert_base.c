/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaimali <gfaimali@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 14:59:16 by gfaimali          #+#    #+#             */
/*   Updated: 2026/08/23 19:03:53 by gfaimali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	id_base(char elt, char *base);// renvoie la position d'un char dans la base.
int	is_base_correct(char *base);
int	len(char *str);
int     power(int nb, int power); 

//prend un nombre dans une base n et le renvoie dans la base 10.
int	baseN_to_dec(char *nbr, char *base_from)
{
	int	res;
	int	i;
	int	base_len;
	int	nb_len;
	int	nb_value;

	res = 0;
	i = 0;
	base_len = len(base_from);
	nb_len = len(nbr);
	while (nbr[i] != '\0')
	{
		nb_value = id_base(nbr[i], base_from);
		res = res + (nb_value * power(base_len, nb_len - 1 - i));
		i++;
	}
	return (res);
}

char	*dec_to_BaseN(int nb,char *base_to)
{
	

}

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{

	if (is_base_correct(base_from) != 1 || is_base_correct(base_to) != 1)
		return (NULL);
}
