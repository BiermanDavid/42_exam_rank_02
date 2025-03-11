#include <unistd.h>

void rev_print(char *str)
{
	int index = 0;

	//goto end of string
	while (str[index])
	{
		index++;
	}
	//loop from end of string to beginning and print
	while (index > 0)
	{
		index--;
		write(1, &str[index], 1);
	}
}

int main(int argc, char *argv[])
{
	if (argc == 2)
		rev_print(argv[1]);
	write(1, "\n", 1);
	return(0);
}