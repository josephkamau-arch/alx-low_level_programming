#include <stdio.h>

/**
 * main - print size of various type on the computer it is compiled and run on
 * return o
 */

int main(void)

{
	char a;
	int b;
	long int c;
	long int d;
	float f;

printf("size of the char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("size of an int: %lu byte\n", (unsigned long)sizeof(b));
printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
