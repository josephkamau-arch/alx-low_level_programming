#include <stdio.h>

/**
 * main - print size of various type on the computer it is compiled and run on.
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("size of the char: %zu byte(s)\n", sizeof(char));
	printf("size of an int: %zu byte\n", sizeof(int));
	printf("Size of long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}
