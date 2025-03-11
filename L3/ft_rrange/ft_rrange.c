#include <stdlib.h>
// #include <stdio.h>

int	*ft_rrange(int start, int end)
{
	int *range;
	int index;
	int size;

	if (start > end)
		size = start - end + 1;
	else
		size = end - start + 1;
	
	range = (int *)malloc(sizeof(int) * size);
	if (!range)
		return (NULL);

	index = 0;

	while (index < size)
	{
		range[index] = end;
		if (end > start)
			end--;
		else
			end++;
		index++;
	}	
	return (range);
}

// int main(void)
// {
// 	int start = -5;
// 	int end = 17;
// 	int i = 0;
// 	int size;
// 	int *result = ft_rrange(start, end);

// 	if (start > end)
// 		size = start - end + 1;
// 	else
// 		size = end - start + 1;

// 	while (i < size)
// 	{
// 		printf("%d, ", result[i]);
// 		i++;
// 	}
// 	free(result);
// 	return (0);
// }

// Assignment name  : ft_rrange
// Expected files   : ft_rrange.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Write the following function:

// int     *ft_rrange(int start, int end);

// It must allocate (with malloc()) an array of integers, fill it with consecutive
// values that begin at end and end at start (Including start and end !), then
// return a pointer to the first value of the array.

// Examples:

// - With (1, 3) you will return an array containing 3, 2 and 1
// - With (-1, 2) you will return an array containing 2, 1, 0 and -1.
// - With (0, 0) you will return an array containing 0.
// - With (0, -3) you will return an array containing -3, -2, -1 and 0.
