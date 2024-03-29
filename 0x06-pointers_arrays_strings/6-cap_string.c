#include "main.h"

/**
 * *cap_string - prototype function
 *
 * Function that capitalizes all words of a string.
 * Separators of words: space, tab, new line, comma , semi-colon,
 * period, exclamation mark, question mark, quotation marks,
 * bracks, curly bracket.
 *
 * @str: input value, string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int i = 0;
/* string index */

	while (str[i])
	{
		while (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			i++;
		}
		if (str[i - 1] == ' ' ||
				str[i - 1] == '\t' ||
				str[i - 1] == '\n' ||
				str[i - 1] == ',' ||
				str[i - 1] == ';' ||
				str[i - 1] == '.' ||
				str[i - 1] == '!' ||
				str[i - 1] == '?' ||
				str[i - 1] == '"' ||
				str[i - 1] == '(' ||
				str[i - 1] == ')' ||
				str[i - 1] == '{' ||
				str[i - 1] == '}' ||
				i == 0)
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
