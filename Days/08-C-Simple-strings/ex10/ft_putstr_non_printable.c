/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaimali <gfaimali@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 13:39:19 by gfaimali          #+#    #+#             */
/*   Updated: 2026/08/17 18:33:00 by gfaimali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_printable(char c)
{
	if (c >= 32 && c != 127)
		return (0);
	return (1);
}

void	dec_to_hexa(char c)
{
	char	r;
	int		res;
	int		temp;

	res = c;
	if (res <= 16)
		write(1, "0", 1);
	while (res != 0)
	{
		temp = res % 16;
		if (temp < 10)
			r = temp + 48;
		else
			r = temp + 87;
		res = res / 16;
	}
	write(1, &r, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_str_is_printable(str[i]) == 1)
		{
			write(1, "\\", 1);
			dec_to_hexa(str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
/*
int main()
{
	ft_putstr_non_printable("Test\nTEST");
	return (0);
}

**It should handle with non printable:** KO 💔
*Input:*
```
nVI\u0018\n.51<\n\u0006P\u0014dw\u0015\u0014\u0006\u0006$4-\f\u0016B\u000e2Kp&fXXv)L\u0012MR{\u0016J
```

*Expected stdout:*
```
nVI\\18\\0a.51<\\0a\\06P\\14dw\\15\\14\\06\\06$4-\\0c\\16B\\0e2Kp&fXXv)L\\12MR{\\16J
```

*Actual stdout:*
```
nVI\\1\\0A.51<\\0A\\06P\\1dw\\1\\1\\06\\06$4-\\0C\\1B\\0E2Kp&fXXv)L\\1MR{\\1J
```


*/
