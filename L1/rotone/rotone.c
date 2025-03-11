#include <unistd.h>

void rotone(char *str)
{
	int index;
	int rotate;
	index = 0;
	rotate = 0;

	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			rotate = ((str[index] - 'a' + 1) % 26) + 'a';
			write(1, &rotate, 1);
		}
		else if (str[index] >= 'A' && str[index] <= 'Z')
		{
			rotate = ((str[index] - 'A' + 1) % 26) + 'A';
			write(1, &rotate, 1);
		}
		else
			write(1, &str[index], 1);
		index++;
	}

}

int main(int argc, char *argv[])
{
	if (argc == 2)
		rotone(argv[1]);
	write(1, "\n", 1);
	return(0);
}

// Assignment name  : rotone
// Expected files   : rotone.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes a string and displays it, replacing each of its
// letters by the next one in alphabetical order.

// 'z' becomes 'a' and 'Z' becomes 'A'. Case remains unaffected.

// The output will be followed by a \n.

// If the number of arguments is not 1, the program displays \n.

// Example:

// $>./rotone "abc"
// bcd
// $>./rotone "Les stagiaires du staff ne sentent pas toujours tres bon." | cat -e
// Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$
// $>./rotone "AkjhZ zLKIJz , 23y " | cat -e
// BlkiA aMLJKa , 23z $
// $>./rotone | cat -e
// $
// $>
// $>./rotone "" | cat -e
// $
// $>
