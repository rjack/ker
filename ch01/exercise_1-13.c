#include<stdio.h>

/* Exercise 1-13. Write a program to print a histogram of the lengths of words
 * in its input. It is easy to draw the histogram with the bars horizontal; a
 * vertical orientation is more challenging. */

#define INSIDE_A_WORD 1
#define OUTSIDE_A_WORD 2
#define MAX_WORD_LENGTH 78

#define MAX(x,y) ((x) > (y) ? (x) : (y))
#define MIN(x,y) ((x) < (y) ? (x) : (y))

main()
{
	int i, c, state, len, min_len, max_len;
	int counter[MAX_WORD_LENGTH];

	state = OUTSIDE_A_WORD;

	/* Initialize counters. */
	for (len = 0; len < MAX_WORD_LENGTH; ++len) {
		counter[len] = 0;
	}

	len = 0;
	min_len = MAX_WORD_LENGTH;
	max_len = 0;
	while ((c = getchar()) != EOF) {
		if (c != ' ' && c != '\t' && c != '\n') {
			if (state == OUTSIDE_A_WORD) {
				state = INSIDE_A_WORD;
			}
			++len;
		} else if (state == INSIDE_A_WORD) {
			state = OUTSIDE_A_WORD;
			if (len < MAX_WORD_LENGTH) {
				++counter[len];
				min_len = MIN(min_len, len);
				max_len = MAX(max_len, len);
			}
			len = 0;
		}
	}

	/* Print bars for each length frequency. */
	for (len = min_len; len <= max_len; ++len) {
		printf("%2d ", len);
		for (i = 0; i < counter[len]; ++i) {
			putchar('*');
		}
		putchar('\n');
	}
}
