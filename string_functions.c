#include <stdlib.h>
#include "shell.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to the string
 * Return: length of string
 */

int _strlen(char *s)
{
int i;
for (i = 0; s[i]; i++)
;
return (i);
}


/**
 * _atoi - it converts a string to an integer
 * @s: string to convert
 * Return: integer
 */

int _atoi(char *s)
{
	int i, n, signe = 1;

	i = n = 0;
	while ((*(s + i) < '0' || *(s + i) > '9') && (*(s + i) != '\0'))
	{
		if (*(s + i) == '-')
			signe *= -1;
		i++;
	}
	while ((*(s + i) >= '0') && (*(s + i) <= '9'))
	{
		n = n * 10 + signe * (*(s + i) - '0');
		i++;
	}
	return (n);
}

/**
 * _strcmp - compare two strings
 * @s1: string
 * @s2: string
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
int i, c = 0;
for (i = 0; s1[i] || s2[i]; i++)
{
if (s1[i] != s2[i])
{
c = s1[i] - s2[i];
break;
}
}
return (c);
}

/**
 * concat_all - concatenate two strings
 * @s1: string
 * @s2: string
 *Return: string
 */
char *concat_all(char *s1, char *s2)
{
	char *result = NULL;
	int l1 = 0, l2 = 0, i = 0, k = 0;

	for (l1 = 0; s1[l1]; l1++)
		;

	for (l2 = 0; s2[l2]; l2++)
		;

	result = malloc(sizeof(char) * (l1 + l2 + 1));
	if (!result)
		return (NULL);

	for (i = 0; s1[i]; i++)
		result[i] = s1[i];
	k = i;

	for (i = 0; s2[i]; i++)
		result[k + i] = s2[i];
	k = k + i;

	result[k] = '\0';

	return (result);
}
