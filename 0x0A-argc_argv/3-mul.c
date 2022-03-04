#include <stdio.h>
#include <stdlib.h>

/**
 * main - This function multiplies two numbers
 * @argc: argument count
 * @argv: array of pointers to argument strings
 * Return: Result of multiplication or 1
 */

int main(int argc, char *argv[])
{
	int x, y, result;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	result = x * y;

	printf("%d\n", result);

	return (0);
}
