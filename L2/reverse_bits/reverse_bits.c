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

unsigned char reverse_bits(unsigned char octet)
{
	int bit = 8;
	unsigned char reverse = 0;

	while (bit--)
	{
		reverse = (reverse << 1) | (octet & 1);
		octet >>= 1;
	}
	return reverse;
}

int main(void)
{
	unsigned char octet = 16;
	unsigned char reverse = reverse_bits(octet);

	print_bits(octet);
	write(1, "\n", 1);
	print_bits(reverse);
	write(1, "\n", 1);
	return(0);
}