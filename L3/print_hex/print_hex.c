#include <unistd.h>

void print_hex(int number)
{
	char hex_digits[] = "0123456789abcdef";
	char buffer[32];
	int index;
	index = 0;

	if (number == 0)
		return ;
	while (number > 0)
	{
		buffer[index++] = hex_digits[number % 16];
		number = number / 16;
	}
	while (--index >= 0)
		write(1, &buffer[index], 1);
}

int ft_atoi(const char *str)
{
	int result;
	result = 0;

	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result);
}

int	main(int argc, char *argv[])
{
	int number;
	if (argc == 2)
	{
		number = ft_atoi(argv[1]);
		print_hex(number);
	}
	write(1, "\number", 1);
	return (0);
}


// Assignment name  : print_hex
// Expected files   : print_hex.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes a positive (or zero) number expressed in base 10,
// and displays it in base 16 (lowercase letters) followed by a newline.

// If the number of parameters is not 1, the program displays a newline.

// Examples:

// $> ./print_hex "10" | cat -e
// a$
// $> ./print_hex "255" | cat -e
// ff$
// $> ./print_hex "5156454" | cat -e
// 4eae66$
// $> ./print_hex | cat -e
// $
