
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

/* Main function */
int main(void)
{
	int pupilCount = 0, weightedSum = 0;
	int grade1, grade2, grade3, grade4, grade5, grade6;

	// Get user input: grade counts
	printf("Please enter number of grades 1 to 6 separated by commas: ");
	scanf("%d,%d,%d,%d,%d,%d", &grade1, &grade2, &grade3, &grade4, &grade5, &grade6);
	getchar();

	// Calculate and print results
	pupilCount = grade1 + grade2 + grade3 + grade4 + grade5 + grade6;
	weightedSum = grade1 + 2 * grade2 + 3 * grade3 + 4 * grade4 + 5 * grade5 + 6 * grade6;
	printf("The average grade is %.1f.\n", weightedSum / (float)pupilCount);

	getchar();
	return 0;
}
