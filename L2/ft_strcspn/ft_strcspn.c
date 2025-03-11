#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int str_count;
	int reject_count;

	reject_count = 0;
	str_count = 0;

	while (s[str_count])
	{
		reject_count = 0;
		while (s[reject_count])
		{
			if (s[str_count] == reject[reject_count])
				return (str_count);
			reject_count++;
		}
		str_count++;
	}
	return (str_count);
}


// Assignment name	: ft_strcspn
// Expected files	: ft_strcspn.c
// Allowed functions: None
// ---------------------------------------------------------------

// Reproduce exactly the behavior of the function strcspn
// (man strcspn).

// The function should be prototyped as follows:

// size_t	ft_strcspn(const char *s, const char *reject);