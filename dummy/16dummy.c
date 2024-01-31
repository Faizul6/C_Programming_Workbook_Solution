#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

/* Main function.
*
* R1 = 1000 and R2 = 2200 give a good compromise, because
* - U_RX = 3.4 V is not exceeding 3.3 V too much for I_RX = 0 mA and
* - U_RX = 3.1 V is not dropping below 3 V for I_RX = 0.5 mA.
*/
int main(void)
{
	int r1, r2;
	double u0 = 5.0, uRX, iRX;

	// Get user input: grade counts
	printf("Please enter r1esistances R1 and R2 separated by a comma: ");
	scanf("%d,%d", &r1, &r2);
	getchar();

	// Calculate and print results for I_RX = 0 mA
	iRX = 0;
	uRX = (r2*(u0 - (r1 * iRX)))/(double)(r1 + r2);
	printf("U_RX = %.1f V for \n", uRX);

	// Calculate and print results for I_RX = 0.5 mA
	iRX = 0.5;
	uRX = (r2 * (u0 - (r1 * iRX)))  / (double)(r1 + r2);
	printf("U_RX = %.1f V\n", uRX);

	getchar();
	return 0;
}
