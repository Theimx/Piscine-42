/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaimali <gfaimali@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 17:12:36 by gfaimali          #+#    #+#             */
/*   Updated: 2026/08/21 13:24:09 by gfaimali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// Aide : marudman, 
#include <stdlib.h>


int	len(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return (i);
}

//renvoie 1 si le char C est un separateur.
int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while(charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	nb_word(char *str, char *charset)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while(str[i] != '\0')
	{
		if (is_sep(str[i], charset) == 0)
			if ((is_sep(str[i - 1], charset) == 1) || i == 0 )
				res++;
		i++;
	}
	return (res + 1);
}

#include <stdio.h>
int main()
{

	printf("%s : %d\n","Ceci,,, est une phrasede, test", nb_word("Phrase de test:", ""));

	return (0);
}
