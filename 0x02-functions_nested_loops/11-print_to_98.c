#include "main.h"

/**
 * print_to_98 to - Print al naturel number from input 98
 * in order to seprated by a comma followed by aspace.
 * @n: the number begin counting at.
 */
print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
			printf("%d/n", n);
	}

	else
	{
		while (n > 98)
			printf("%d, ", n++);
			printf("%d/n", n);
	}
}
