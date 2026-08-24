/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaimali <gfaimali@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 14:59:16 by gfaimali          #+#    #+#             */
/*   Updated: 2026/08/24 11:46:42 by gfaimali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	id_base(char elt, char *base);// renvoie la position d'un char dans la base.
int	is_base_correct(char *base);
int	len(char *str);
int	ft_power(int nb, int power); 
int	len_malloc(int nb, char *base_to);

//prend un nombre dans une base n et le renvoie dans la base 10.
int     baseN_to_dec(char *nbr, char *base_from)
{
        int     res = 0, i = 0, sign = 1;
        int     base_len = len(base_from);
        int     power;

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

char	*dec_to_BaseN(int nb,char *base_to)
{
	char *str = " ";
	return (str);	
}


char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char 	*res;
	int		dec_nbr;
	int		len_malloc;

	if (is_base_correct(base_from) != 1 || is_base_correct(base_to) != 1)
		return (NULL);
	dec_nbr = baseN_to_dec(nbr, base_from);
	len_malloc = len_malloc(dec_nbr, base_to);

}


#include <stdio.h>
int	main()
{
	printf("%d\n", baseN_to_dec("1010", "01"));
    printf("%d\n", baseN_to_dec("+0", "0123456789"));
	printf("%d\n", baseN_to_dec("-------10", "0123456789"));
    printf("%d\n", baseN_to_dec("A", "0123456789ABCDEF"));
    printf("%d\n", baseN_to_dec("eyn", "poneyvif"));

	return (0);
}

