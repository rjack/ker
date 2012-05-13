#include<stdio.h>

/* Print Fahrenheit-Celsius table for fahr = 0, 20, 40, ..., 300.
 * 
 * Exercise 1-3: Modify the temperature conversion program to print a heading
 * above the table. */

main()
{
	float fahr, celsius;
	float lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	printf("Fahrenheit\tCelsius\n");

	fahr = lower;
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr - 32.0);
		printf("%10.0f\t%7.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
