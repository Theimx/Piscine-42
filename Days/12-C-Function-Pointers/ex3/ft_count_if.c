/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaimali <gfaimali@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 12:56:06 by gfaimali          #+#    #+#             */
/*   Updated: 2026/08/27 16:28:59 by gfaimali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			res++;
		i++;
	}
	return (res);
}
