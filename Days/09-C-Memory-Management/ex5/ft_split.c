/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaimali <gfaimali@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 17:12:36 by gfaimali          #+#    #+#             */
/*   Updated: 2026/08/22 15:43:44 by gfaimali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// Aide : marudman, 
#include <stdlib.h>


int	word_len(char *str, char *charset, int start)
{
	int	len;

	len = 0;
	while (str[start + len] != '\0' && is_sep(str[start + len], charset) == 0)
		len++;
	return (len);
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
			if (i == 0  || (is_sep(str[i - 1], charset) == 1))
				res++;
		i++;
	}
	return (res + 1); // + 1 = NULL
}

//creer une fonction copie pour passer sous les 25 lignes
char	**ft_split(char *str, char *charset)
{
	char	**strs;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	strs = malloc((sizeof(char *) * nb_word(str, charset)));
	if (strs == NULL)
		return (NULL);

	while(i < nb_word(str, charset))
	{
		strs[i] = malloc(sizeof(char) * len(str) + 1);
		if (strs[i] == NULL)
			return(NULL);
		while(is_sep(str[k], charset) != 1)
		{
			strs[i][j] = strs[i][k];
			j++;
			k++;
		}
		i++;
		j = 0;
		k++;
	}
	return (strs);
}

#include <stdio.h>
int main()
{
	char **tab;
	int i = 0;

	tab = ft_split("   Chaine  de   test  ", " ");
	while (tab[i] != NULL)
	{
		printf("Mot %d : [%s]\n", i, tab[i]);
		free(tab[i]);
		i++;
	}
	free(tab);
	return (0);
}



