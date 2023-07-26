#include "main.h"
/**
 * _strcmp - string comparison
 * @s1: first string.
 * @s2: second string.
 * Return: 0 if same or 1 if not.
 */
int _strcmp(char *s1, char *s2)
{
unsigned int i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
	return (1);
i++;
}
return (0);
}
/**
 * _strlen - length calculator
 * @s: string one.
 * Return: the length of a string.
 */
int _strlen(char *s)
{
unsigned int i = 0;
if (!s || s[0] == '\0')
	return (0);
while (s[i] != '\0')
{
i++;
}
return (i);
}
