#include <unistd.h>

void camelspider(char *str)
{
	int index = 0;
	int camel = 0;

	if (str[index] >= 'A' && str[index] <= 'Z')
	{
		camel = (str[index] + 32);
		write(1, &camel, 1);
		index++;
	}

	while (str[index])
	{
		if (str[index] >= 'A' && str[index] <= 'Z')
		{
			write(1, "_", 1);
			camel = (str[index] + 32);
			write(1, &camel, 1);
		}
		else
			write(1, &str[index], 1);

		index++;
	}
}


int main(int argc, char *argv[])
{
	if (argc == 2)
		camelspider(argv[1]);
	write(1, "\n", 1);
	return(0);
}

// Assignment name  : camel_to_snake
// Expected files   : camel_to_snake.c
// Allowed functions: malloc, free, realloc, write
// --------------------------------------------------------------------------------

// Write a program that takes a single string in lowerCamelCase format
// and converts it into a string in snake_case format.

// A lowerCamelCase string is a string where each word begins with a capital letter
// except for the first one.

// A snake_case string is a string where each word is in lower case, separated by
// an underscore "_".

// Examples:
// $>./camel_to_snake "hereIsACamelCaseWord"
// here_is_a_camel_case_word
// $>./camel_to_snake "helloWorld" | cat -e
// hello_world$
// $>./camel_to_snake | cat -e
// $
