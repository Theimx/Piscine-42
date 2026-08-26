/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaimali <gfaimali@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 15:29:15 by gfaimali          #+#    #+#             */
/*   Updated: 2026/08/26 17:30:00 by gfaimali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Indra
#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	show_tab(int argc, char  **argv)
{
	int	i;

	i = 1;
	while  (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
}

void    ft_swap(char **stra, char **strb) {
    char    *temp;

    printf("swap\n");
    temp = *stra;
    *stra = *strb;
    *strb = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i - 1]) <= ft_strcmp(argv[i - 1], argv[i])
			&& (i != 1))
		{
			ft_swap(&argv[i], &argv[i + i]);
			i = 1;
		}
		i++;
	}
	show_tab(argc, argv);
	return (0);
}
