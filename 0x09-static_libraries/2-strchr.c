#include "main.h"
#include <stddef.h>
/**
 *_strchr -func that  find a char in a string
 *@s: string
 *@c: char that searching for
 *Return: Returns the str when char c  found
 */
char *_strchr(char *s, char c)
{
int i;

for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == c)
{
return (s + i);
}
}
return (NULL);
}
