#include <stdlib.h>

int nbr_len(int nbr)
{
	int size;
	if (nbr == 0)
		return (1);
	size = 0;
	while (nbr != 0)
	{
		nbr /= 10;
		size++;
	}
	return (size);

}

int ft_abs(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return(nbr);
}

char *ft_itoa(int nbr)
{
	char *number;
	int length;
	int index;

	length = nbr_len(nbr);
	index = 0;

	if (nbr < 0)
		index++;
	length = length + index;
	number = (char *)malloc((length + 1) * sizeof(char));
	if (!number)
		return (NULL);
	number[0] = '-';
	number[length] = '\0';
	while ((length - 1) >= index)
	{
		number[length - 1] = ft_abs(nbr % 10) + '0';
		nbr/= 10;
		length--;
	}
	return (number);
}

// Assignment name  : ft_itoa
// Expected files   : ft_itoa.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Write a function that takes an int and converts it to a null-terminated string.
// The function returns the result in a char array that you must allocate.

// Your function must be declared as follows:

// char	*ft_itoa(int nbr);
