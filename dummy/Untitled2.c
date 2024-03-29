/* Include files */
#include <stdio.h>

/* Main function */
int main(void)
{
	double xl = 0.0, xr = 4.0;
	double fl, fr;
	double delta = 1.0e-6;

	// Initial function values
	fl = xl * xl - 2.0 * xl - 1.0;
	fr = xr * xr - 2.0 * xr - 1.0;

	// Determine zero-crossing by bisection method
	printf("Zero-crossing for f(x) = x^2 - 2x - 1 by bisection method:\n");
	printf("x0 in [%.9f , %.9f]\n", xl, xr);

	while (xr - xl > delta)
	{
		// Adapt interval
		double xm = 0.5 * (xl + xr);
		double fm = xm * xm - 2.0 * xm - 1.0;

		if (fm * fl > 0)
		{
			xl = xm;
			fl = fm;
		}
		else
		{
			xr = xm;
			fr = fm;
		}

		// Print interval
		printf("x0 in [%.9f , %.9f]\n", xl, xr);
	}
	putchar('\n');

	// Print results to console
	printf("Stopped at interval size: %.9f\n", delta);
	printf("Approximated x0         : %.9f\n", 0.5 * (xl + xr));
	printf("Approximated f(x0)      : %.9f\n", 0.5 * (fl + fr));

	getchar();
	return 0;
}
