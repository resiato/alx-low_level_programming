#include "holberton.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * but for multiples of three prints Fizz instead of the number
 * and for the multiples of five prints Buzz
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			_putchar(" Fizz");
		} else if (i % 5 == 0 && i % 3 != 0)
		{
			_putchar(" Buzz");
		} else if (i % 3 == 0 && i % 5 == 0)
		{
			_putchar(" FizzBuzz");
		} else if (i == 1)
		{
			_putchar(i);
		} else
		{
			_putchar(i);
		}
	}
	_putchar('\n');

