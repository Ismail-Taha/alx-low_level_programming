#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
  *print_all -  function that prints anything.
  *@format: list of all arguments passed to the function.
  *
  *Return: void(Nothing).
  */
void print_all(const char * const format, ...)
{
	unsigned int i;
	va_list args;
	char *s, *separ;

	va_start(args, format);

	separ = "";

	i = 0;
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separ,  va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separ, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separ, va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", separ, s);
				break;
			default:
				i++;
				continue;
		}
		separ = ", ";
		i++;
	}

	printf("\n");
	va_end(args);
}
