// #include <unistd.h>

// int ft_atoi(const char *str)
// {
// 	int sign;
// 	int index;
// 	int result;

// 	sign = 1;
// 	index = 0;
// 	result = 0;

// 	while (str[index] == ' ' || str[index] == '+')
// 		index++;
// 	if (str[index] == '-')
// 	{
// 		sign = -1;
// 		index++;
// 	}
// 	while(str[index] >= '0' && str[index] <= '9')
// 	{
// 		result = result * 10 + (*str - '0');
// 		index++;
// 	}
// 	return (sign * result);
// }
int ft_atoi(const char *str)
{
	int result;
	result = 0;
	int sign;
	sign = 1;

	while (*str == ' ' || *str == '+')
		str++;

	if (*str == '-')
	{
		sign = -1;
		str++;
	}

	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (sign * result);
}

// #include <stdio.h>

// int main(void)
// {
//     const char *str = "   +1234"; // The string to be converted
//     int num = ft_atoi(str);       // Conversion using ft_atoi

//     printf("%d\n",num); // Print the result

//     return 0;
// }

// Assignment name  : ft_atoi
// Expected files   : ft_atoi.c
// Allowed functions: None
// --------------------------------------------------------------------------------

// Write a function that converts the string argument str to an integer (type int)
// and returns it.

// It works much like the standard atoi(const char *str) function, see the man.

// Your function must be declared as follows:

// int	ft_atoi(const char *str);
