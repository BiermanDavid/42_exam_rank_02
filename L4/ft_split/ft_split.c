#include <stdlib.h>

int is_delimiter(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

int word_count(char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str)
	{
		if (!is_delimiter(*str) && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (is_delimiter(*str))
			in_word = 0;
		str++;
	}
	return (count);
}

char	*word_dup(char *str, int length)
{
	char	*word;
	int	 i;

	word = (char *)malloc(sizeof(char) * (length + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < length)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str)
{
	char	**result;
	int	 i = 0;
	int	 j;
	int	 word_len;

	result = (char **)malloc(sizeof(char *) * (word_count(str) + 1));
	if (!result)
		return (NULL);
	while (*str)
	{
		while (is_delimiter(*str) && *str)
			str++;
		if (*str)
		{
			word_len = 0;
			while (str[word_len] && !is_delimiter(str[word_len]))
				word_len++;
			result[i] = word_dup(str, word_len);
			i++;
			str += word_len;
		}
	}
	result[i] = NULL;
	return (result);
}


// Assignment name  : ft_split
// Expected files   : ft_split.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Write a function that takes a string, splits it into words, and returns them as
// a NULL-terminated array of strings.

// A "word" is defined as a part of a string delimited either by spaces/tabs/new
// lines, or by the start/end of the string.

// Your function must be declared as follows:

// char	**ft_split(char *str);
