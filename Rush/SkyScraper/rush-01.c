#include <unistd.h>
#include <stdlib.h>

# define SIZE 4

// cc -Wall -Wextra -Werror -o rush-01 rush-01.c
// ./rush-01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"

typedef struct s_puzzle
{
	int		col_up[SIZE];
	int		col_down[SIZE];
	int		row_left[SIZE];
	int		row_right[SIZE];
	int		**grid;
}	t_puzzle;

/* ------------------------- outils de base ------------------------- */

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static void	ft_putstr(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
}

static int	ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/* ---------------------------- parsing ------------------------------ */

static int	fill_values(const char *s, int values[16])
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (k < 16)
	{
		if (!ft_isdigit(s[i]) || s[i] < '1' || s[i] > '4')
			return (0);
		values[k] = s[i] - '0';
		i++;
		k++;
		if (k < 16)
		{
			if (s[i] != ' ')
				return (0);
			i++;
		}
	}
	return (s[i] == '\0');
}

static int	parse_input(const char *s, t_puzzle *p)
{
	int	values[16];
	int	i;

	if (!fill_values(s, values))
		return (0);
	i = 0;
	while (i < SIZE)
	{
		p->col_up[i] = values[i];
		p->col_down[i] = values[4 + i];
		p->row_left[i] = values[8 + i];
		p->row_right[i] = values[12 + i];
		i++;
	}
	return (1);
}

/* ----------------------------- grille ------------------------------- */

static void	free_grid(t_puzzle *p)
{
	int	i;

	if (!p->grid)
		return ;
	i = 0;
	while (i < SIZE)
	{
		free(p->grid[i]);
		i++;
	}
	free(p->grid);
	p->grid = NULL;
}

static int	alloc_grid(t_puzzle *p)
{
	int	i;
	int	j;

	p->grid = malloc(sizeof(int *) * SIZE);
	if (!p->grid)
		return (0);
	i = 0;
	while (i < SIZE)
	{
		p->grid[i] = malloc(sizeof(int) * SIZE);
		if (!p->grid[i])
			return (free_grid(p), 0);
		j = 0;
		while (j < SIZE)
			p->grid[i][j++] = 0;
		i++;
	}
	return (1);
}

static void	print_grid(t_puzzle *p)
{
	int	i;
	int	j;

	i = 0;
	while (i < SIZE)
	{
		j = 0;
		while (j < SIZE)
		{
			ft_putchar('0' + p->grid[i][j]);
			if (j < SIZE - 1)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

/* ----------------------------- solveur ------------------------------- */

static int	count_view(int v0, int v1, int v2, int v3)
{
	int	values[SIZE];
	int	i;
	int	max;
	int	count;

	values[0] = v0;
	values[1] = v1;
	values[2] = v2;
	values[3] = v3;
	max = 0;
	count = 0;
	i = 0;
	while (i < SIZE)
	{
		if (values[i] > max)
		{
			max = values[i];
			count++;
		}
		i++;
	}
	return (count);
}

static int	check_row(t_puzzle *p, int i)
{
	int	left;
	int	right;

	left = count_view(p->grid[i][0], p->grid[i][1],
			p->grid[i][2], p->grid[i][3]);
	if (left != p->row_left[i])
		return (0);
	right = count_view(p->grid[i][3], p->grid[i][2],
			p->grid[i][1], p->grid[i][0]);
	return (right == p->row_right[i]);
}

static int	check_col(t_puzzle *p, int j)
{
	int	up;
	int	down;

	up = count_view(p->grid[0][j], p->grid[1][j],
			p->grid[2][j], p->grid[3][j]);
	if (up != p->col_up[j])
		return (0);
	down = count_view(p->grid[3][j], p->grid[2][j],
			p->grid[1][j], p->grid[0][j]);
	return (down == p->col_down[j]);
}

static int	value_available(t_puzzle *p, int i, int j, int val)
{
	int	k;

	k = 0;
	while (k < SIZE)
	{
		if (p->grid[i][k] == val || p->grid[k][j] == val)
			return (0);
		k++;
	}
	return (1);
}

static int	backtrack(t_puzzle *p, int pos)
{
	int	i;
	int	j;
	int	val;

	if (pos == SIZE * SIZE)
		return (1);
	i = pos / SIZE;
	j = pos % SIZE;
	val = 1;
	while (val <= SIZE)
	{
		if (value_available(p, i, j, val))
		{
			p->grid[i][j] = val;
			if ((j != SIZE - 1 || check_row(p, i))
				&& (i != SIZE - 1 || check_col(p, j))
				&& backtrack(p, pos + 1))
				return (1);
			p->grid[i][j] = 0;
		}
		val++;
	}
	return (0);
}

static int	solve(t_puzzle *p)
{
	return (backtrack(p, 0));
}

/* ------------------------------- main --------------------------------- */

int	main(int argc, char **argv)
{
	t_puzzle	p;

	if (argc != 2 || !parse_input(argv[1], &p))
	{
		ft_putstr("Error\n");
		return (1);
	}
	if (!alloc_grid(&p))
	{
		ft_putstr("Error\n");
		return (1);
	}
	if (!solve(&p))
	{
		ft_putstr("Error\n");
		free_grid(&p);
		return (1);
	}
	print_grid(&p);
	free_grid(&p);
	return (0);
}