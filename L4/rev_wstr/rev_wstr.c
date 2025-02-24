#include <unistd.h>

void rev_words(char *str)
{
	int index = 0;
	int start = 0;
	int end = 0;
	int word_count = 0;

	while (str[index])
	{
		index++;
	}
	
	start = index;

	while (index >= 0)
	{
		while (str[index] != ' ' && index >= 0)
		{
			if (str[index + 1] == ' ' || str[index + 1] == '\0')
			{
				end = index;
			}				
			if (str[index - 1] == ' ' || index == 0)
			{
				start = index;
				if (str[index - 1] == ' ')
					word_count++;
			}
			index--;
		}
		while (start <= end)
		{
			write(1, &str[start], 1);
			start++;
		}
		if (word_count > 0)
		{
			word_count--;
			write(1, " ", 1);
		}
		index--;
	}
}

int main(int argc, char *argv[])
{
	if (argc == 2)
		rev_words(argv[1]);
	write(1, "\n", 1);
	return(0);
}

// Assignment name  : rev_wstr
// Expected files   : rev_wstr.c
// Allowed functions: write, malloc, free
// --------------------------------------------------------------------------------

// Write a program that takes a string as a parameter, and prints its words in 
// reverse order.

// A "word" is a part of the string bounded by spaces and/or tabs, or the 
// begin/end of the string.

// If the number of parameters is different from 1, the program will display 
// '\n'.

// In the parameters that are going to be tested, there won't be any "additional" 
// spaces (meaning that there won't be additionnal spaces at the beginning or at 
// the end of the string, and words will always be separated by exactly one space).

// Examples:

// $> ./rev_wstr "You hate people! But I love gatherings. Isn't it ironic?" | cat -e
// ironic? it Isn't gatherings. love I But people! hate You$
// $>./rev_wstr "abcdefghijklm"
// abcdefghijklm
// $> ./rev_wstr "Wingardium Leviosa" | cat -e
// Leviosa Wingardium$
// $> ./rev_wstr | cat -e
// $
// $>
