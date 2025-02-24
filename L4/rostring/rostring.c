#include <unistd.h>

void rostring(char *str)
{
	int index = 0;
	int start = 0;
	int end = 0;
	int flag = 0;

	while (str[index] == ' ')
	{
		index++;
	}
	start = index;

	while (str[index] != ' ' && str[index] != '\0')
	{
		end = index;
		index++;
	}

	while (str[index])
	{
		if (str[index] != ' ')
		{
			write(1, &str[index], 1);
			flag = 1;
		}
		else if (flag == 1)
		{
			write(1, &str[index], 1);
			flag = 0;
		}
		index++;
	}

	while (start <= end)
	{
		if (flag == 1)
		{
			write(1, " ", 1);
			flag = 0;
		}
		write(1, &str[start], 1);
		start++;
	}
}

int main(int argc, char *argv[])
{
	if (argc >= 2)
		rostring(argv[1]);
	write(1, "\n", 1);
	return(0);
}

// Assignment name  : rostring
// Expected files   : rostring.c
// Allowed functions: write, malloc, free
// --------------------------------------------------------------------------------

// Write a program that takes a string and displays this string after rotating it
// one word to the left.

// Thus, the first word becomes the last, and others stay in the same order.

// A "word" is defined as a part of a string delimited either by spaces/tabs, or
// by the start/end of the string.

// Words will be separated by only one space in the output.

// If there's less than one argument, the program displays \n.

// Example:

// $>./rostring "abc   " | cat -e
// abc$
// $>
// $>./rostring "Que la      lumiere soit et la lumiere fut"
// la lumiere soit et la lumiere fut Que
// $>
// $>./rostring "     AkjhZ zLKIJz , 23y"
// zLKIJz , 23y AkjhZ
// $>
// $>./rostring "first" "2" "11000000"
// first
// $>
// $>./rostring | cat -e
// $
// $>
