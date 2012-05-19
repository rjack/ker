#include<stdio.h>

/* Exercise 1-12. Write a program that prints its input one word per line. */

#define INSIDE_A_WORD 1
#define OUTSIDE_A_WORD 2

main()
{
	int c, state;

	state = OUTSIDE_A_WORD;

	/* There's no specification on what to do of blanks. I choosed to
	 * skipe them in the output. */
	while ((c = getchar()) != EOF) {
		if (c != ' ' && c != '\t' && c != '\n') {
			if (state == OUTSIDE_A_WORD) {
				state = INSIDE_A_WORD;
			}
			putchar(c);
		} else if (state == INSIDE_A_WORD) {
			putchar('\n');
			state = OUTSIDE_A_WORD;
		}
	}
}
