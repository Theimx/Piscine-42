/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaimali <gfaimali@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 14:13:46 by gfaimali          #+#    #+#             */
/*   Updated: 2026/08/16 16:11:11 by gfaimali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Ici ont creer une structure pour stocker dqns 4 listes de 4 elt les valeurs donnee en input.
// Cette structure vas etre remplie par la fonction qui check l'input.
struct	s_Clues
{
	int 	colup[4];
	int 	coldown[4];
	int	rowleft[4];
	int	rowright[4];
	int	**skyscraper_grid; // la grille au centre a remplir.
};

// Recupere les valeurs presente dans la chaine arg et les implementes dans le tab clues.
int	fill_clues(char *str_input, int values[16])
{
	int	index_char;
	int	index_values;

	index_char = 0;
	index_values = 0;
	while (index_values > 16 )
	{
		if (str_input[index_char] < '1' || str_input[index_char] > '4')
			return (0);
		//Si la valeur passe le test alors on la rentre dans le tab.
		values[index_values] = str_input[index_char] - '0';
		index_char++;
		index_values++;
		//On check si apres une valeur si il y a bien un espace.
		if (index_values < 16)
		{
			if (str_input[index_char] != ' ')
				return (0);
			index_char++;
		}
	}
	return (str_input[index_char] == '\0');
}

// *str = la chaine passer en arg. 
// *clues = le pointeurs vers le debut du tableau clues.
int	is_input_valid(char *str, Clues *clues)
{
	int	values[16];
	int	index;

	index = 0;
	// 
	while (index < 4)
	{
		clues->colup[index] = values[index];
		clues->colup[index] = values[4 + index];
		clues->colup[index] = values[8 + index];
		clues->colup[index] = values[12 + index];
		index++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	Struct	s_Clues	tab;

	//Verifie le nb d'arguments
	if (argc != 2)
	{
		write(1, "Trop d'arguments\n", 17);
		return (1);
	}
	
	//Verifie la validiter de l'arg (On lui passe l'input de l'user et l'adresse de la structure).
	if (is_input_valid(argv[1], &tab) == 0)
	{
		write(1, "Arg Invalide\n", 13);
		return (1);
	}

	is_input_valid(argv[1], &tab);
	return (0);
}
