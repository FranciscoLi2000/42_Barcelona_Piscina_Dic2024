/* Professor Rabnud joined a social media group.
 *
 * Initially he had five friends.
 *
 * He noticed that his friend count grew in the following fashion.
 *
 * The first week one friend dropped out and the remaining number of friends doubled.
 *
 * The second week two friends dropped out and the remaining number of friends doubled.
 *
 * In general, in the Nth week, N friends dropped out and the remaining number doubled.
 *
 * Write a program that computes and displays the number of friends each week.
 *
 * The program should continue until the count exceeds Dunbar’s number.
 *
 * Dunbar’s number is a rough estimate of the maximum size of a cohesive social group
 *  in which each member knows every other member and how they relate to one another.
 *
 *  Its approximate value is 150 */

#include <stdio.h>

const int	DUNBAR = 150;

int	main(void)
{
	int	friends;
	int	weeks;

	friends = 5;
	weeks = 1;
	while (friends <= DUNBAR)
	{
		friends = (friends - weeks) * 2;
		printf("Week %i: He has %i friends.\n", weeks, friends);
		weeks++;
	}
	return (0);
}
