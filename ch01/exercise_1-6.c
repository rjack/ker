#include<stdio.h>

/* Exercise 1-6. Verify that the expression getchar() != EOF is 0 or 1. */

main()
{
	/*
	 * Actually, I can't verify this, as in "prove".
	 * All I can do is to write a program that prints "True" if getchar()
	 * != EOF is 0 or 1. Then I should prove that this program always
	 * returns true...
	 */
	int c, res;
	
	c = getchar();
	res = (c != EOF);

	if (res == 0 || res == 1)
		printf("True");
}
