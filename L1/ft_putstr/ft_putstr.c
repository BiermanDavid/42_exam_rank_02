#include <unistd.h>

void	ft_putstr(char *str)
{
	int index = 0;
	while (str[index])
	{
		write(1, &str[index], 1);
		index++;
	}
}

// Assignment name  : ft_putstr
// Expected files   : ft_putstr.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a function that displays a string on the standard output.

// The pointer passed to the function contains the address of the string's first
// character.

// Your function must be declared as follows:

// void	ft_putstr(char *str);
