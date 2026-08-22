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

int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	word_len(char *str, char *charset, int start)
{
	int	len;

	len = 0;
	while (str[start + len] != '\0'
		&& is_sep(str[start + len], charset) == 0)
		len++;
	return (len);
}

int	nb_word(char *str, char *charset)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (str[i] != '\0')
	{
		if (is_sep(str[i], charset) == 0)
			if (i == 0 || is_sep(str[i - 1], charset) == 1)
				res++;
		i++;
	}
	return (res + 1);
}

char	*copy(char *str, char *charset, int *k)
{
	int		j;
	int		len;
	char	*word;

	j = 0;
	len = word_len(str, charset, *k);
	word = malloc(sizeof(char) * (len + 1));
	if (word == NULL)
		return (NULL);
	while (j < len)
	{
		word[j] = str[*k];
		j++;
		(*k)++;
	}
	word[j] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	strs = malloc(sizeof(char *) * nb_word(str, charset));
	if (strs == NULL)
		return (NULL);
	while (i < nb_word(str, charset) - 1)
	{
		while (is_sep(str[k], charset) == 1)
			k++;
		strs[i] = copy(str, charset, &k);
		if (strs[i] == NULL)
			return (NULL);
		i++;
	}
	strs[i] = NULL;
	return (strs);
}

#include <stdio.h>
int	main(void)
{
	char	**tab;
	int		i;

	i = 0;
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


