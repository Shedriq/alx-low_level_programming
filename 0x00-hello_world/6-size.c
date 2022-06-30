#include <stdio.h>

/**
 * main - init
 * Return: 0
 */

int main(void)
{
	printf("Size of a char; %lu byte(s)\n", sizeof(unsigned char));
	printf("Size of an int; %lu byte(s)\n", sizeof(unsigned int));
	printf("Size of a long int; %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int; %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float; %lu byte(s)\n", sizeof(float));
	return (0);
}
