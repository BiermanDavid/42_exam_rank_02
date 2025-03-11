#include <unistd.h>

void print_bits(unsigned char octet)
{
	int index = 8;
	unsigned char bit;

	while (index--)
	{
		bit = (octet >> index & 1) + '0';
		write(1, &bit, 1);
	}
}

// int main(void)
// {
// 	unsigned char octet = 255;
// 	print_bits(octet);
// 	write(1, "\n", 1);
// 	return(0);
// }



// Assignment name  : print_bits
// Expected files   : print_bits.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a function that takes a byte, and prints it in binary WITHOUT A NEWLINE
// AT THE END.

// Your function must be declared as follows:

// void	print_bits(unsigned char octet);

// Example, if you pass 2 to print_bits, it will print "00000010"