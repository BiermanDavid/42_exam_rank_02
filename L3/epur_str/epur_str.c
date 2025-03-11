#include <stdio.h>
#include <unistd.h>

int alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return(0);
}

void space_race(char *str)
{
	int index = 0;
	int flag = 0;
	int end = 0;

	while (str[index] != '\0')
	{

		while (str[index] != ' ' && str[index] != '\0')
		{
			write(1, &str[index], 1);
			if (alpha(str[index]) && str[index] != '\0')
				flag = 1;
			index++;
		}
		if (flag == 1)
		{
			write(1, " ", 1);
			flag = 0;
		}
		index++;
	}
}

int main(int argc, char *argv[])
{
	if (argc == 2)
		space_race(argv[1]);
	write(1, "\n", 1);
	return(0);
}

// Assignment name  : epur_str
// Expected files   : epur_str.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes a string, and displays this string with exactly one
// space between words, with no spaces or tabs either at the beginning or the end,
// followed by a \n.

// A "word" is defined as a part of a string delimited either by spaces/tabs, or
// by the start/end of the string.

// If the number of arguments is not 1, or if there are no words to display, the
// program displays \n.

// Example:

// $> ./epur_str "See? It's easy to print the same thing" | cat -e
// See? It's easy to print the same thing$
// $> ./epur_str " this        time it      will     be    more complex  . " | cat -e
// this time it will be more complex .$
// $> ./epur_str "No S*** Sherlock..." "nAw S*** ShErLaWQ..." | cat -e
// $
// $> ./epur_str "" | cat -e
// $
// $>

// $> ./epur_str "vous voyez c'est facile d'afficher la meme chose" | cat -e
// vous voyez c'est facile d'afficher la meme chose$
// $> ./epur_str " seulement          la c'est      plus dur " | cat -e
// seulement la c'est plus dur$
// $> ./epur_str "comme c'est cocasse" "vous avez entendu, Mathilde ?" | cat -e
// $
// $> ./epur_str "" | cat -e
// $
// $>

