#include "main.h"
#include <stdio.h>

/**
 * main - This function prints the numbers from 1 to 100
 * but instead of multiples of 3 prints Fizz
 * and instead of multiples of 5 prints Buzz
 * and when the number is multiple of both prints FizzBuzz.
 * Return: 0
 */

int main(void)
{
	int FizzBuzz;

	for (FizzBuzz = 1; FizzBuzz <= 100; FizzBuzz++)
	{
		if (FizzBuzz == 1)
		{
			printf("%d", FizzBuzz);
		}
		else if (FizzBuzz % 3 == 0 && FizzBuzz % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (FizzBuzz % 3 != 0 && FizzBuzz % 5 == 0)
		{
			printf(" Buzz");
		}
		else if (FizzBuzz % 3 == 0 && FizzBuzz % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else
		{
			printf(" %d", FizzBuzz);
		}
	}
	printf("\n");

	return (0);
}
