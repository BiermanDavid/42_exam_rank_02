#include <unistd.h>

int	letter_count(char letter)
{
	int repeat;

	if (letter >= 'a' && letter <= 'z')
		repeat = letter - 'a' + 1;
	else if (letter >= 'A' && letter <= 'Z')
		repeat = letter - 'A' + 1;
	else
		repeat = 1;
	return (repeat);
}

void	alpha(char *str)
{
	int repeat;
	while (*str)
	{
		repeat = letter_count(*str);
		while (repeat--)
			write(1, str, 1);
		str++;
	}
}

int main(int argc, char *argv[])
{
	if (argc == 2)
		alpha(argv[1]);
	write(1, "\n", 1);
	return (0);
}

// Assignment name  : repeat_alpha
// Expected files   : repeat_alpha.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program called repeat_alpha that takes a string and display it
// repeating each alphabetical character as many times as its alphabetical index,
// followed by a newline.

// 'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

// Case remains unchanged.

// If the number of arguments is not 1, just display a newline.

// Examples:

// $>./repeat_alpha "abc"
// abbccc
// $>./repeat_alpha "Alex." | cat -e
// Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
// $>./repeat_alpha 'abacadaba 42!' | cat -e
// abbacccaddddabba 42!$
// $>./repeat_alpha | cat -e
// $
// $>
// $>./repeat_alpha "" | cat -e
// $
// $>
