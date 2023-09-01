#include "main.h"
/**
 * _strcat - appends the source string to the destination string
 * @dest: destination
 * @src: source
 * Return: returns the full string
 */
char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;

while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
return (dest);
}
