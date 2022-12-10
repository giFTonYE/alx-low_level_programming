/*
 * file: 0-positive_or_negative.c
 * Auth: Brennan D Baraban
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print a random number and stateswether it is positive, negative or zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
