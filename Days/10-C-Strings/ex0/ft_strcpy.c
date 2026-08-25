

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	
	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
		{
			while (i + 1 < n)
			{
				i++;
				dest[i] = '\0';
			}
			return (dest);
		}
		i++;
	}
	return (dest);
}

int ft_strncmp(char *s1, char *s2, unsigned int n)
{

}
