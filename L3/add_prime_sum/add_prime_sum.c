#include <unistd.h>


int prime_sum(int n)
{
	int index = 2;

	if (n <= 1)
		return(0);
	while (index * index <= n)
	{
		if (n % index == 0)
			return(0);
		index++;
	}
	return(1);

}

int ft_atoi(char *str)
{
	int result = 0;

	while (*str)
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result);
}
void ft_putnbr(int n)
{
	int digit = 0;

	if (n > 9)
		ft_putnbr(n / 10);
	digit = n % 10 + '0';
	write(1, &digit, 1);
}
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int n = ft_atoi(argv[1]);
		int sum = 0;

		while (n > 0)
		{
			if (prime_sum(n))
				sum = sum + n;
			n--;
		}
		ft_putnbr(sum);
	}
	if (argc != 2)
		ft_putnbr(0);
	write(1, "\n", 1);
	return(0);
}


// Assignment name  : add_prime_sum
// Expected files   : add_prime_sum.c
// Allowed functions: write, exit
// --------------------------------------------------------------------------------

// Write a program that takes a positive integer as argument and displays the sum
// of all prime numbers inferior or equal to it followed by a newline.

// If the number of arguments is not 1, or the argument is not a positive number,
// just display 0 followed by a newline.

// Yes, the examples are right.

// Examples:

// $>./add_prime_sum 5
// 10
// $>./add_prime_sum 7 | cat -e
// 17$
// $>./add_prime_sum | cat -e
// 0$
// $>
