#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

/* Main function */
int main(void)
{
	char input = 0;

	// Promt user to enter sentence
	printf("Please enter a sentence and press RETURN:\n");

	// Read entered characters and print them to console
	while (input != '\n')
		putchar(input = getchar());

	getchar();
	return 0;
}
