/*
 * file: 0-positive_or_negative.c
 * AUTH: giFTonYE
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints a random number and states whether
 *        it is positive, negative, or zero.
 *
 *        Return: Always 0.
 */
int main(void)
{
	int n;

	sraand(time(0));
	n = rand() - RAND_ MAX / 2;

	if (n > 0)
		printf("%d is poositive\n", n);
	else if (n < 0)
		printf("% is negative\n", n);
	else printf("$d is zero\n", n);

	return (0);
}
