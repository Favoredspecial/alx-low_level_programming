#include<stdio.h>

/**
 * myStoryline - Apply the constructor attribute to myStoryline() so that it
 *   is executed before main()
 */void myStoryline(void) __attribute__ ((constructor));

/**
 * myStoryline - implementation of myStoryline
 */
void myStoryline(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
