#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int index = 0;
	int length = 0;
	char *copy;

	while (src[length])
		length++;
	
	copy = malloc(sizeof(char) * (length + 1));

	if (copy == NULL)
		return (NULL);

	while (index <= length)
	{
		copy[index] = src[index];
		index++;
	}
	return (copy);
}

// Assignment name  : ft_strdup
// Expected files   : ft_strdup.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Reproduce the behavior of the function strdup (man strdup).

// Your function must be declared as follows:

// char    *ft_strdup(char *src);
