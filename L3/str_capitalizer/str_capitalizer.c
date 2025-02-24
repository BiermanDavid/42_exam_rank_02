#include <unistd.h>

void str_capitalizer(char *str)
{
	int index;
	int flag;
	int cap;

	index = 0;
	flag = 0;
	cap = 0;
	if (str[index] != ' ')
		flag = 1;

	while (str[index])
	{
		if (str[index] >= 'A' && str[index] <= 'Z')
		{
			str[index] = str[index] + 32;
		}
		index++;
	}
	index = 0;

	while (str[index])
	{
		if ((str[index] >= 'a' && str[index] <= 'z') && str[index - 1] == ' ')
		{
			flag = 1;
		}
		if (str[index] >= 'a' && str[index] <= 'z' && flag == 1)
		{
			str[index] = str[index] - 32;
			write(1, &str[index], 1);
			flag = 0;
		}
		else
			write(1, &str[index], 1);
		index++;
	}

}

int main (int argc, char *argv[])
{
	int index;
	index = 1;

	while (index < argc)
	{
		str_capitalizer(argv[index]);
		write(1, "\n", 1);
		index++;
	}
	if (argc <= 1)
		write(1, "\n", 1);
	return(0);
}


// Assignment name  : str_capitalizer
// Expected files   : str_capitalizer.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes one or several strings and, for each argument,
// capitalizes the first character of each word (If it's a letter, obviously),
// puts the rest in lowercase, and displays the result on the standard output,
// followed by a \n.

// A "word" is defined as a part of a string delimited either by spaces/tabs, or
// by the start/end of the string. If a word only has one letter, it must be
// capitalized.

// If there are no arguments, the progam must display \n.

// Example:

// $> ./str_capitalizer | cat -e
// $
// $> ./str_capitalizer "a FiRSt LiTTlE TESt" | cat -e
// A First Little Test$
// $> ./str_capitalizer "__SecONd teST A LITtle BiT   Moar comPLEX" "   But... This iS not THAT COMPLEX" "     Okay, this is the last 1239809147801 but not    the least    t" | cat -e
// __second Test A Little Bit   Moar Complex$
//    But... This Is Not That Complex$
//      Okay, This Is The Last 1239809147801 But Not    The Least    T$
// $>
