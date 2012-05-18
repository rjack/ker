#include<stdio.h>

/* Exercise 1-8. Write a program to count blanks, tabs, and newlines. */

main()
{
	int c;
	long blanks_count, tabs_count, newlines_count;

	blanks_count = 0;
	tabs_count = 0;
	newlines_count = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ')
			++blanks_count;
		else if (c == '\t')
			++tabs_count;
		else if (c == '\n')
			++newlines_count;
	}
	printf("Blanks: %ld\n", blanks_count);
	printf("Tabs: %ld\n", tabs_count);
	printf("Newlines: %ld\n", newlines_count);
}
