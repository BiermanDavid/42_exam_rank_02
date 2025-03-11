#include <stdio.h>

int	max(int* tab, unsigned int len)
{
	int index = 1;
	int result = tab[0];

	if (len == 0 || tab = 0)
		return (0);
	
	while (index < len)
	{
		if (tab[index] > result)
			result = tab[index];
		index++;
	}
	return (result);
}

int main(void)
{
    int array1[] = {3, 1, 4, 1, 3, 5};
    int array2[] = {};
    unsigned int len1 = 6;
    unsigned int len2 = 0;

    printf("Max: %d\n", max(array1, len1));
    printf("Empty array: %d\n", max(array2, len2));

    return 0;
}


// Assignment name  : max
// Expected files   : max.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write the following function:

// int		max(int* tab, unsigned int len);

// The first parameter is an array of int, the second is the number of elements in
// the array.

// The function returns the largest number found in the array.

// If the array is empty, the function returns 0.
