#include<stdio.h>

/* Print Fahrenheit-Celsius table for fahr = 0, 20, 40, ..., 300.
 * 
 * Exercise 1-4: Write a program to print the corresponding Celsius to
 * Fahrenheit table. */
main()
{
	float fahr, celsius;
	float lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	printf("Celsius\tFahrenheit\n");

	celsius = lower;
	while (celsius <= upper) {
		fahr = (9.0/5.0) * celsius + 32.0;
		printf("%7.0f\t%10.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
