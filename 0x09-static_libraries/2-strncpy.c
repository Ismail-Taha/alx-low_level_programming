#include "main.h"
/**
 * _strncpy - function to copy string
 * @dest: destination
 * @src: source
 * @n: num of chars
 * Return: return destination
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;

if (n == 0)
{
return (dest);
}
else
{
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
}
return (dest);
}
